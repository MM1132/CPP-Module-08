#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(8);
	// sp.addNumber(2);
	// sp.addNumber(5);
	// sp.addNumber(10);
	// sp.addNumber(12);
	// sp.addNumber(13);
	// sp.addNumber(20);

	sp.addNumber(20);
	sp.addNumber(13);
	sp.addNumber(5);
	sp.addNumber(12);
	sp.addNumber(2);
	sp.addNumber(10);

	std::cout << "The tests are starting..." << std::endl;
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

	return 0;
}
