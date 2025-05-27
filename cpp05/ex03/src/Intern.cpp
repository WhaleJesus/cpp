
#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern::~Intern()
{}

AForm* Intern::makeForm(std::string form, std::string target)
{
	std::string formNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	for (std::string::size_type i = 0; i < form.length(); ++i) {
        form[i] = std::tolower(form[i]);
    }
	int i = 0;
	while (i < 3 && form != formNames[i])
		i++;

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << form << std::endl;
			return new ShrubberyCreationForm(target);
		case 1:
			std::cout << "Intern creates " << form << std::endl;
			return new RobotomyRequestForm(target);
		case 2:
			std::cout << "Intern creates " << form << std::endl;
			return new PresidentialPardonForm(target);
		default:
			throw FormNotFoundException();
	}
}

const char* Intern::FormNotFoundException::what() const throw()
{
	return "Intern could not create form because it does not exist";
}

Intern::FormNotFoundException::~FormNotFoundException() throw()
{}
