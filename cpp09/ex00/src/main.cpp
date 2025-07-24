#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong args" << std::endl;
		return 1;
	}
	
	(void)av;

	try 
	{
		BitcoinExchange btc("files/data.csv");
		btc.programme(av[1]);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
