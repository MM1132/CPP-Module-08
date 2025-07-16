#pragma once

#include<algorithm>
#include<exception>

struct IntNotFoundException: public std::exception
{
	virtual const char* what() const noexcept override
	{
		return "The integer was not found";
	}
};

template<typename T>
typename T::iterator easyfind(T& p, int intParam)
{
	typename T::iterator found = std::find(p.begin(), p.end(), intParam);
	if (found == p.end())
		throw IntNotFoundException();
	return found;
}
