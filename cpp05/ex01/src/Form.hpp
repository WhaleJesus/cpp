

#pragma once
#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
	
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
				virtual ~GradeTooHighException() throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
				virtual ~GradeTooLowException() throw();
		};

		Form(std::string name, int signGrade, int execGrade);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		void 				beSigned(Bureaucrat& b);
		const std::string	getName() const;
		bool 				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
};

std::ostream& operator<<(std::ostream& os, const Form& f);
