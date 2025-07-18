#pragma once

#include <stack>
// #include <iterator>

// typedef namespace std;

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		using BaseType = typename std::stack<T>;
		using const_reverse_iterator = typename BaseType::container_type::const_reverse_iterator;
		using iterator = typename BaseType::container_type::iterator;
		using const_iterator = typename BaseType::container_type::const_iterator;
		using reverse_iterator = typename BaseType::container_type::reverse_iterator;

		MutantStack(): BaseType() {}
		MutantStack(const MutantStack<T>& other): BaseType(other) {}
		virtual ~MutantStack() {}
		MutantStack<T>& operator=(const MutantStack<T>& other)
		{
			if (this != &other)
				BaseType::operator=(other);
			return *this;
		}

		iterator begin() { return BaseType::c.begin(); }
		iterator end() { return BaseType::c.end(); }
		const_iterator begin() const { return BaseType::c.begin(); }
		const_iterator end() const { return BaseType::c.end(); }
		reverse_iterator rbegin() { return BaseType::c.rbegin(); }
		reverse_iterator rend() { return BaseType::c.rend(); }
		const_reverse_iterator rbegin() const { return BaseType::c.rbegin(); }
		const_reverse_iterator rend() const { return BaseType::c.rend(); }
};
