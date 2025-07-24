#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base *generate()
{
	srand(time(0));
	int i = rand() % 3;
	switch (i)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		default:
			return new C;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (const std::exception&) {}
	try {
		B& a = dynamic_cast<B&>(p);
		(void)a;
		std::cout << "B" << std::endl;
	}
	catch (const std::exception&) {}
	try {
		C& a = dynamic_cast<C&>(p);
		(void)a;
		std::cout << "C" << std::endl;
	}
	catch (const std::exception&) {}
}

int main()
{
	Base* base = generate();
	Base& bRef = *base;

	identify(base);
	identify(bRef);
	delete(base);
}
