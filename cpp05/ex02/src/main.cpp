
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try {
		Bureaucrat* john = new Bureaucrat("John", 1);
		Bureaucrat* hank = new Bureaucrat("Hank", 150);
		
		try {
			Bureaucrat* dreg = new Bureaucrat("John", 160);
			std::cout << dreg << std::endl;
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	
		try {
			Bureaucrat* dreg = new Bureaucrat("John", 0);
			std::cout << *dreg << std::endl;
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		
		std::cout << *hank << std::endl;
		std::cout << *john << std::endl;
		
		ShrubberyCreationForm* sForm1 = new ShrubberyCreationForm("files/pluto");
		std::cout << *sForm1 << std::endl;
		
		hank->signForm(*sForm1);
		hank->executeForm(*sForm1);
		john->signForm(*sForm1);
		john->executeForm(*sForm1);

		RobotomyRequestForm* rForm1 = new RobotomyRequestForm("idk lol");
		std::cout << *rForm1 << std::endl;

		hank->signForm(*rForm1);
		hank->executeForm(*rForm1);
		john->signForm(*rForm1);
		for (int i = 0; i < 10; i++)
		{
			std::cout << i << std::endl;
			john->executeForm(*rForm1);
		}

		PresidentialPardonForm* pForm1 = new PresidentialPardonForm("just a guy");
		std::cout << *pForm1 << std::endl;
		
		try {
			john->incrementGrade();
		}
		catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

		hank->signForm(*pForm1);
		hank->executeForm(*pForm1);
		john->signForm(*pForm1);
		john->executeForm(*pForm1);
		hank->executeForm(*pForm1);
		
		delete john;
		delete hank;
		delete sForm1;
		delete rForm1;
		delete pForm1;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
