#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <cctype>

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& other);
		~Intern();

		AForm* makeForm(std::string form, std::string target);

		class FormNotFoundException : public std::exception
		{
			public:
				virtual const char* what() const throw();
				virtual ~FormNotFoundException() throw();
		};
};
