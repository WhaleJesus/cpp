
#include "Bureaucrat.hpp"

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
			std::cout << dreg << std::endl;
		}
		catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << *hank << std::endl;
		std::cout << *john << std::endl;
		
		delete john;
		delete hank;

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
