
#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "please provide one argument" << std::endl;
		return 0;
	}
	
	ScalarConverter::convert(av[1]);
}
