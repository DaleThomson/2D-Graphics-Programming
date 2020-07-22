#pragma once
#include <iostream>

class Arithmetic
{
public:
	Arithmetic();
	Arithmetic(float number1, float number2);
	float Sum();
	float Difference();
	float Product();
	float Quotient();
	void Show(std::ostream& os);
private:
	float num1, num2;
};
