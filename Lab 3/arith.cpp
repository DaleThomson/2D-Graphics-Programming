#include "arith.h"

Arithmetic::Arithmetic(float number1, float number2)
{
	num1 = number1;
	num2 = number2;
}

Arithmetic::Arithmetic()
{
	std::cout << "Please enter the first number: ";
	std::cin >> num1;
	std::cout << std::endl << "Please enter the second number: ";
	std::cin >> num2;
}

float Arithmetic::Sum()
{
	return num1 + num2;
}

float Arithmetic::Difference()
{
	return num1 - num2;
}

float Arithmetic::Product()
{
	return num1 * num2;
}

float Arithmetic::Quotient()
{
	return num1 / num2;
}

void Arithmetic::Show(std::ostream& os)
{
	os << "Result is: " << Sum();
}