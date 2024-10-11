#include <iostream>

int main()
{
	std::cout << "Average Calculator\n";
	std::cout << "Input five numbers:\n";

	int first, second, third, fourth, fifth;

	std::cin >> first;
	std::cin >> second;
	std::cin >> third;
	std::cin >> fourth;
	std::cin >> fifth;

	float average = (first + second + third + fourth + fifth) / 5.0f;

	std::cout << "\nAverage is: " << average << "\n";
}