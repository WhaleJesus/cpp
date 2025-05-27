

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		virtual ~ShrubberyCreationForm();
		void execute(const Bureaucrat& executor) const;

		class OpenFileException : public std::exception
		{	
			public:
				virtual const char* what() const throw();
				virtual ~OpenFileException() throw();
		};
};
