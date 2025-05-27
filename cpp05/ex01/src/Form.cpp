

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade)
	: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form constructor called" << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& other)
	: _name(other._name), _signed(other._signed), _signGrade(other._signGrade), _execGrade(other._execGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		_signed = other._signed;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << f.getName() << ", Form sign grade " << f.getSignGrade() << ", execution grade " << f.getExecGrade() << " signed " << f.getSigned();
	return os;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

const std::string Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

int Form::getSignGrade() const
{
	return _signGrade;
}

int Form::getExecGrade() const
{
	return _execGrade;
}

void Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

Form::GradeTooHighException::~GradeTooHighException()throw(){}
Form::GradeTooLowException::~GradeTooLowException()throw(){}
