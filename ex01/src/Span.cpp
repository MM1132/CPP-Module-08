#include "Span.hpp"
#include <exception>

Span::Span(unsigned int N):
	m_N(N),
	m_vec()
{}

Span::Span(Span& other):
	m_N(other.m_N),
	m_vec(other.m_vec)
{}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->m_N = other.m_N;
		this->m_vec = other.m_vec;
	}
	return (*this);
}

void Span::addNumber(int number)
{
	if (this->m_vec.size() >= this->m_N)
	{
		throw std::length_error("Cannot add more elements to the Span");
	}
	this->m_vec.push_back(number);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (auto& it = begin; it != end; ++it)
	{
		if (this->m_vec.size() >= this->m_N)
		{
			throw std::length_error("Cannot add more elements to the Span");
		}
		this->m_vec.push_back(*it);
	}
}

int Span::shortestSpan()
{
	if (this->m_vec.size() <= 1)
		throw std::length_error("There is an error that has been encountered with the length of the vector inside the Span. Please add more elements to the Span IMMEDIATELY!!! ");
	std::vector<int> tmpVec = this->m_vec;
	std::sort(tmpVec.begin(), tmpVec.end());
	int minDistance = std::numeric_limits<int>::max();
	for (size_t i = 0; i < tmpVec.size() - 1; i++)
		minDistance = std::min(minDistance, tmpVec[i + 1] - tmpVec[i]);
	return minDistance;
}

int Span::longestSpan()
{
	if (this->m_vec.size() <= 1)
		throw std::length_error("There is an error that has been encountered with the length of the vector inside the Span. Please add more elements to the Span IMMEDIATELY!!! ");
	std::vector<int> tmpVec = this->m_vec;
	std::sort(tmpVec.begin(), tmpVec.end());
	return std::abs(*tmpVec.begin() - *(--tmpVec.end()));
	// or:
	// return *(--++--tmpVec.end()) -*--++tmpVec.begin();
}
