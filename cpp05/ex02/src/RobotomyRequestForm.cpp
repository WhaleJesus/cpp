#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other)
{
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	_target = other._target;
	setSigned(other.getSigned());
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	this->checkExecReq(executor);
	const int random_val = std::rand();
	//std::cout << "random val: " << random_val << std::endl;
	//std::cout << "RAND_MAX: " << RAND_MAX << std::endl;
	
	if (random_val > RAND_MAX / 2)
		std::cout << _target << " has been successfully robotomized" << std::endl;
	else 
		throw RobotomyFailedException();
}

const char* RobotomyRequestForm::RobotomyFailedException::what() const throw()
{
	return "Robotomy failed";
}

RobotomyRequestForm::RobotomyFailedException::~RobotomyFailedException() throw(){}
