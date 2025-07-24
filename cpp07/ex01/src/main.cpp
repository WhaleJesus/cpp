#include "iter.hpp"

void add(int &i)
{
	i++;
}

void toUpper(std::string& str)
{
	int len = str.length();
	for (int i = 0; i < len; i++)
		str[i] = std::toupper(str[i]);
}

void print(std::string str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	int ia[] = {1, 2, 3};
	std::string str[] = {"uwu", "AaaaAaaa", "dadDy"};
	const std::string cstr[] = {"uwu", "AaaaAaaa", "dadDy"};
	int len = 3;
	
	std::cout << "int array:" << std::endl;
	::iter(ia, len, add);
	for (int i = 0; i < len; i++)
		std::cout << ia[i] << std::endl;
	
	std::cout << std::endl << "string array:" << std::endl;
	::iter(str, len, toUpper);
	for (int i = 0; i < len; i++)
		print(str[i]);

	print("\nconst string array:");
	::iter(cstr, len, print);
}
