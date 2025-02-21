/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:24:07 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/20 19:14:01 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _grade_to_sign(150), _grade_to_execute(150)
{
	_signed = false;
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	_signed = false;
}

AForm::AForm(const AForm &other) : _name(other._name), _grade_to_sign(other._grade_to_sign), _grade_to_execute(other._grade_to_execute)
{
	_signed = other._signed;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this == &other)
		return (*this);
	_signed = other._signed;
	return (*this);
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const
{
	return (_signed);
}

int AForm::getGradeToSign() const
{
	return (_grade_to_sign);
}

int AForm::getGradeToExecute() const
{
	return (_grade_to_execute);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _grade_to_sign)
		throw GradeTooLowException();
	_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &out, AForm &form)
{
	out << "AForm name: " << form.getName() << std::endl;
	out << "Signed: " << form.getSigned() << std::endl;
	out << "Grade to sign: " << form.getGradeToSign() << std::endl;
	out << "Grade to execute: " << form.getGradeToExecute() << std::endl;
	return (out);
}
