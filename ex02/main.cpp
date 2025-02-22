/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:08:31 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/22 23:07:16 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main ()
{
	Bureaucrat b1("b1", 137);
	Bureaucrat b2("b2", 45);
	Bureaucrat b3("b3", 5);
	ShrubberyCreationForm s1("s1");
	RobotomyRequestForm s2("s2");
	PresidentialPardonForm s3("s3");

	std::cout << b1;
	std::cout << b2;

	s1.beSigned(b1);
	b1.signForm(s1.getSigned(), s1.getName());
	s2.beSigned(b2);
	b2.signForm(s2.getSigned(), s2.getName());
	s3.beSigned(b3);
	b3.signForm(s3.getSigned(), s3.getName());

	try {
		b1.executeForm(s1);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		b2.executeForm(s2);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		b3.executeForm(s3);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return (0);
}
