#ifndef SPAN_HPP
#define SPAN_HPP

#include <cstdlib>
#include <exception>
#include <stdexcept>	// for logic_error
#include <vector>
#include <algorithm>

class Span
{
private:
	Span ();

public:
	Span (size_t capacity);
	Span (const Span &other);
	~Span ();

	Span &operator= (const Span &other);

	void addNumber (int val);
	int shortestSpan () const;
	int longestSpan () const;

	template<typename InputIterator>
	void addNumbers (InputIterator first, InputIterator last)
	{
		for (InputIterator it = first; it != last; it++)
			addNumber (*it);
	}

	size_t size () const;
	size_t capacity () const;

private:
	std::vector<int> _numbers;
	size_t _capacity;
};

#endif
