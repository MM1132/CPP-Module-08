#include "easyfind.hpp"

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec = { 2, 6, 10, 20 };

	std::vector<int> toFind = { 2, 10, 11 };

	for (const int &value: toFind)
	{
		try
		{
			std::vector<int>::iterator found = easyfind(vec, value);
			std::cout << "Found integer from vector: " << *found << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error finding integer " << value << ": " << e.what() << '\n';
		}
	}

	return 0;
}
