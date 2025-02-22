/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 04:19:03 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/22 05:06:51 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	AForm	*form;

	form = AForm::CreateForm(formName, target);
	if (form == NULL)
		throw FormNotFoundException();
	else
		std::cout << "Intern creates " << formName << std::endl;
	return (form);
}

const char *Intern::FormNotFoundException::what() const throw()
{
	return ("Form not found");
}
