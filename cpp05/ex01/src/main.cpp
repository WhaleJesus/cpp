
#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat* john = new Bureaucrat("John", 1);
		Bureaucrat* hank = new Bureaucrat("Hank", 150);
		
		Form* form1 = new Form("form 1", 2, 1);
		std::cout << *form1 << std::endl;
		
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
		
		try {
			Form* form2 = new Form("form 2", 0, 160);
			std::cout << *form2 << std::endl;
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << *hank << std::endl;
		std::cout << *john << std::endl;
		
		john->signForm(*form1);
		hank->signForm(*form1);

		delete john;
		delete hank;
		delete form1;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
