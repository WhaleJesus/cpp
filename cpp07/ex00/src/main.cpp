#include "whatever.hpp"

int main2(void)
{
	int a = 56;
	int b = 42;

	std::cout << "(a, b) before swap: (" << a << ", " << b << ")" << std::endl;
	::swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;
	
	int min = ::min(a, b);
	std::cout << "min: " << min << std::endl;

	int max = ::max(a, b);
	std::cout << "max: " << max << std::endl;

	char d = 'd';
	char e = 'e';
	::swap(d, e);
	std::cout << "d: " << d << " | e: " << e << std::endl;

	char charMin = ::min(e, d);
	std::cout << "char min: " << charMin << std::endl;
	return (0);
}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
