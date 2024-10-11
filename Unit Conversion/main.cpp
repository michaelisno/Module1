#include <iostream>

int main()
{
	std::cout << "Unit Converter:\n";
	std::cout << "1 - Convert Inches to Feet\n2 - Convert Inches to metres\n";
	
	int option;

	std::cin >> option;

	int inches;

	std::cout << "Enter a Number of Inches:";
	std::cin >> inches;

	if (option == 1)
	{
		float feet = inches / 12.0f;
		std::cout << "Feet: " << feet << "\n";
	}
	else if (option == 2)
	{
		float metres = inches * 0.0254f;
		std::cout << "Metres: " << metres << "\n";
	}
	else
	{
		std::cout << "Invalid Option.\n";
	}
}