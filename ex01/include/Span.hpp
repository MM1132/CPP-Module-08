#pragma once

#include <algorithm>
#include <vector>
#include <exception>

class Span
{
	private:
		unsigned int m_N;
		std::vector<int> m_vec;

	public:
		Span(unsigned int N = 0);
		Span(Span& other);
		~Span() = default;
		Span& operator=(const Span& other);

		void addNumber(int number);
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		int shortestSpan();
		int longestSpan();
};

// Halt's Maul du Arsch! Ich schlag dir die Fresse ein! 

// Lasst uns zur Mensa gehen! 

// => Halt das
