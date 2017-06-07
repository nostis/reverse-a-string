#include <iostream>
#include <conio.h>
#include <string>

int main()
{
	std::string string;
	std::string reversed;

	std::cout << "Enter the string: " << std::endl;
	std::cin >> string;

	for (int i = string.size() - 1; i >= 0; i--) // reverse string
	{
		reversed.push_back(string[i]);
	}

	std::cout << "Reversed string: " << std::endl;
	std::cout << reversed;


	getch();

	return 0;
}