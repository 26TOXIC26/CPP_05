/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:29:00 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/18 15:43:46 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = other._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	_target = other._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::ofstream file;
	std::string filename = _target + "_shrubbery";
	file.open(filename.c_str());
	if (!file.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return;
	}
	file << "         *         \n";
    file << "        ***        \n";
    file << "       *****       \n";
    file << "      *******      \n";
    file << "     *********     \n";
    file << "    ***********    \n";
    file << "   *************   \n";
    file << "  ***************  \n";
    file << " ***************** \n";
    file << "         ||        \n";
    file << "         ||        \n";
    file << "         ||        \n";

	file.close();
}


