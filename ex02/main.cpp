/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:08:31 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/18 15:44:25 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
	Bureaucrat b1("b1", 150);
	Bureaucrat b2("b2", 1);
	ShrubberyCreationForm s1("s1");
	ShrubberyCreationForm s2("s2");

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	return (0);
}
