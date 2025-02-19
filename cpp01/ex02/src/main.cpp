#include <string>
#include <iostream>

int	main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string* sptr = &s;
	std::string& sref = s;

	std::cout << &s << std::endl;
	std::cout << sptr << std::endl;
	std::cout << &sref << std::endl;

	std::cout << s << std::endl;
	std::cout << *sptr << std::endl;
	std::cout << sref << std::endl;
}
