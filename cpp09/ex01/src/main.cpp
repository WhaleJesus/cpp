#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "please provide argmument in string: '2 3 +'" << std::endl;
		return 1;
	}
	try 
	{
		RPN rpn(av[1]);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
