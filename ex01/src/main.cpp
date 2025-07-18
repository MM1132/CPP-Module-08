#include "Span.hpp"
#include <iostream>
#include <random>
#include <vector>

int main()
{
	Span sp = Span(10000);

	std::random_device device;
	std::mt19937 mt(device());
	std::uniform_int_distribution<int> dist(0, std::numeric_limits<int>::max());
	for (int i = 0; i < 10000; i++)
	{
		sp.addNumber(dist(mt));
	}

	std::cout << "The tests are starting..." << std::endl;
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

	Span addRange = Span(5);
	std::vector<int> numbers = { 3, 5, 7, 13, 17 };
	addRange.addNumbers(numbers.begin(), numbers.end());
	std::cout << "Shortest span after adding range: " << addRange.shortestSpan() << std::endl;
	std::cout << "Longest span after adding range: " << addRange.longestSpan() << std::endl;

	return 0;
}
