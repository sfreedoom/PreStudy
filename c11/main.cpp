#include <iostream>
#include "constructor.h"

int main()
{
	Test a("This a Test String.");
	std::cout << "Value: " << a << std::endl;
	Test && Rvalue = std::move(a);
	std::cout << "Rvalue: " << Rvalue << std::endl;
	return 0;
}
