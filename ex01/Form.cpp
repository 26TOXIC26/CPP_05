/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:24:07 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/18 12:40:32 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _grade_to_sign(150), _grade_to_execute(150)
{
	_signed = false;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	_signed = false;
}

Form::Form(const Form &other) : _name(other._name), _grade_to_sign(other._grade_to_sign), _grade_to_execute(other._grade_to_execute)
{
	_signed = other._signed;
}

Form &Form::operator=(const Form &other)
{
	if (this == &other)
		return (*this);
	_signed = other._signed;
	return (*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}

int Form::getGradeToSign() const
{
	return (_grade_to_sign);
}

int Form::getGradeToExecute() const
{
	return (_grade_to_execute);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _grade_to_sign)
		throw Form::GradeTooLowException();
	_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
	out << "Form name: " << form.getName() << std::endl;
	out << "Signed: " << form.getSigned() << std::endl;
	out << "Grade to sign: " << form.getGradeToSign() << std::endl;
	out << "Grade to execute: " << form.getGradeToExecute() << std::endl;
	return (out);
}
