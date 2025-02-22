/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:13:18 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/22 05:27:14 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm", 72, 45)
{
	_target = other._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	_target = other._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getGradeToExecute() || !getSigned())
		throw AForm::GradeTooLowException();
	std::cout << "Drilling noises" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomization failed" << std::endl;
}

AForm *RobotomyRequestForm::CreateForm(std::string target, AForm *form, std::string name)
{
	if (name == "RobotomyRequestForm" && form == NULL)
		return (new RobotomyRequestForm(target));
	if (form != NULL)
		return (form);
	return (NULL);
}
