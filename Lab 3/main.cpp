#include "arith.h"

void main()
{
	// Create objects
	Arithmetic a1(1.2, 3.4), a2(130.5, 27.3);
	Arithmetic a3;
	std::cout << "Result for a1: " << a1.Sum() << std::endl;
	std::cout << "Result for a2: " << a2.Sum() << std::endl;
	std::cout << "Result for a3: " << a3.Product() << std::endl;
	// Test show method
	std::cout << "Show a1: ";
	a1.Show(std::cout);
	std::cout << std::endl << "Show a2: ";
	a2.Show(std::cout);
}