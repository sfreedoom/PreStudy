#include <iostream>

int main()
{
	wchar_t tempA = 'T';
	char tempB = 'a';

	std::cout << "charA name: " << tempA << std::endl;
	std::cout << "sizeof(charA) : " << sizeof(tempA)<< std::endl;
	std::cout << "charB name: " << tempB << std::endl;
	std::cout << "sizeof(charB) : " << sizeof(tempB)<< std::endl;

	tempA = 'p';
	std::cout << "charA name: " << tempA << std::endl;
}

