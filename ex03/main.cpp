/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:08:31 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/22 05:30:52 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main ()
{
	Intern intern;
	Bureaucrat bureaucrat("bureaucrat", 1);
	AForm *form;
	AForm *form2;
	AForm *form3;

	try
	{

		form = intern.makeForm("ShrubberyCreationForm", "target");
		form->beSigned(bureaucrat);
		bureaucrat.executeForm(*form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete form;

	try
	{
		form2 = intern.makeForm("RobotomyRequestForm", "target");
		form2->beSigned(bureaucrat);
		bureaucrat.executeForm(*form2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete form2;

	try
	{
		form3 = intern.makeForm("PresidentialPardonForm", "target");
		form3->beSigned(bureaucrat);
		bureaucrat.executeForm(*form3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete form3;

	return (0);
}
