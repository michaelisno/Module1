#include <iostream>
#include <cmath>

int main()
{
	float x1, x2, y1, y2;

	std::cout << "Distance Between 2D Coordinates:\n";

	std::cout << "Enter first X coordinate: \n";
	std::cin >> x1;

	std::cout << "Enter first Y coordinate: \n";
	std::cin >> y1;

	std::cout << "Enter second X coordinate: \n";
	std::cin >> x2;

	std::cout << "Enter second Y coordinate: \n";
	std::cin >> y2;

	float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	std::cout << "Distance: " << distance << "\n";
}