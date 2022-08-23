#include "Span.hpp"
#include <limits>

Span::Span () : _numbers () {}

Span::Span (size_t capacity) : _numbers (), _capacity (capacity) {}

Span::Span (const Span &other) : _numbers (other._numbers), _capacity (other._capacity) {}

Span::~Span () {}

Span &Span::operator= (const Span &other)
{
	_numbers = other._numbers;
	_capacity = other._capacity;
	return *this;
}

void Span::addNumber (int val)
{
	if (_numbers.size () == _capacity)
		throw std::logic_error ("span is full");
	_numbers.push_back (val);
}

int Span::shortestSpan () const
{
	if (_numbers.size () < 2)
		throw std::logic_error ("span has less than 2 elements");

	int min = std::numeric_limits<int>::max ();
	for (size_t i = 0; i < _numbers.size (); i += 1)
	{
		for (size_t j = i + 1; j < _numbers.size (); j += 1)
		{
			if (std::abs (_numbers[i] - _numbers[j]) < min)
				min = std::abs (_numbers[i] - _numbers[j]);
		}
	}

	return min;
}

int Span::longestSpan () const
{
	if (_numbers.size () < 2)
		throw std::logic_error ("span has less than 2 elements");

	return *std::max_element (_numbers.begin (), _numbers.end ()) - *std::min_element (_numbers.begin (), _numbers.end ());
}

size_t Span::size () const
{
	return _numbers.size ();
}

size_t Span::capacity () const
{
	return _capacity;
}

