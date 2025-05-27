

#include "AForm.hpp"

AForm::AForm(std::string name, int signGrade, int execGrade)
	: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "AForm constructor called" << std::endl;
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
	: _name(other._name), _signed(other._signed), _signGrade(other._signGrade), _execGrade(other._execGrade)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
		_signed = other._signed;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	os << f.getName() << ", AForm sign grade " << f.getSignGrade() << ", execution grade " << f.getExecGrade() << " signed " << f.getSigned();
	return os;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

std::string AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

int AForm::getSignGrade() const
{
	return _signGrade;
}

int AForm::getExecGrade() const
{
	return _execGrade;
}

void AForm::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	_signed = true;
}

void AForm::execute(const Bureaucrat& executor) const
{
	(void)executor;
}

void AForm::setSigned(bool isSigned)
{
	_signed = isSigned;
}

void AForm::checkExecReq(const Bureaucrat& executor) const
{
	if (_signed == false)
		throw AForm::IsNotSignedException();
	else if (executor.getGrade() > _execGrade)
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char* AForm::IsNotSignedException::what() const throw()
{
	return "Form not signed";
}

AForm::GradeTooHighException::~GradeTooHighException()throw(){}
AForm::GradeTooLowException::~GradeTooLowException()throw(){}
AForm::IsNotSignedException::~IsNotSignedException()throw(){}
