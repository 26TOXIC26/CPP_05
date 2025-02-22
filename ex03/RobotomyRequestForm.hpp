/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:56:54 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/22 05:03:29 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class AForm;
class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm();
		static AForm *CreateForm(std::string target, AForm *form, std::string name);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		void execute(Bureaucrat const &executor) const;
};

#endif
