/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:08:31 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/18 12:52:21 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	Bureaucrat b1("b1", 150);
	Bureaucrat b2("b2", 1);
	Form f1("f1", 1, 1);
	Form f2("f2", 150, 150);

	std::cout << b1 ;
	std::cout << b2 << std::endl;

	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;

	try
	{
		f1.beSigned(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		f2.beSigned(b2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	b1.signForm(f1.getSigned(), f1.getName());
	b2.signForm(f2.getSigned(), f2.getName());
}
