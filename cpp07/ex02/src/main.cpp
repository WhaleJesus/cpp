#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> a(5);
	std::cout << "size: " << a.size() << std::endl;

	for (unsigned int i = 0; i <= a.size(); i++)
	{
		try {
			a[i] = i + 1;
			std::cout << a[i] << std::endl;
		}
		catch (const std::exception& e) {
			std::cout << "ErRoR: " << e.what() << std::endl;
		}
	}


	Array<int> b(5);

	b = a;

	for (unsigned int i = b.size() - 1; i > 0; i--)
		b[i]--;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << "(" << i << ", b, a)" << b[i] << " " << a[i] << std::endl;
}
