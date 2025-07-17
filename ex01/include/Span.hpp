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

		int shortestSpan();
		int longestSpan();
};
