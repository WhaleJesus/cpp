

#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
		class IsNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
				virtual ~IsNotSignedException() throw();
		};

		AForm(std::string name, int signGrade, int execGrade);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		~AForm();

		void 				beSigned(Bureaucrat& b);
		std::string			getName() const;
		bool 				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				setSigned(bool isSigned);
		virtual void		execute(const Bureaucrat& executor) const = 0;
		void				checkExecReq(const Bureaucrat& executor) const;
};

std::ostream& operator<<(std::ostream& os, const AForm& f);
