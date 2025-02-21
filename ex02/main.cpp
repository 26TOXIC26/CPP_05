/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:08:31 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/20 19:16:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
	Bureaucrat b1("b1", 114);
	Bureaucrat b2("b2", 1);
	ShrubberyCreationForm s1("s1");
	ShrubberyCreationForm s2("s2");

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	try
	{
		s1.beSigned(b1);
		s1.execute(b1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return (0);
}
