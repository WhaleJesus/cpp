
#pragma once

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		virtual ~RobotomyRequestForm();
			
		void execute(const Bureaucrat& executor) const;

		class RobotomyFailedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
				virtual ~RobotomyFailedException() throw();
		};
};
