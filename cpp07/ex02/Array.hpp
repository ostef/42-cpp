#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <exception>

template<typename T>
class Array
{
public:
	class OutOfBoundsException : public std::exception
	{
	public:
		virtual const char *what () const throw ()
		{
			return "array index is out of bounds";
		}
	};

public:
	Array () : m_data (NULL), m_count (0) {}
	Array (unsigned int cap)
	{
		m_data = new T[cap];
		m_count = cap;
	}

	Array (const Array &other)
	{
		m_data = NULL;
		m_count = 0;
		*this = other;
	}

	~Array ()
	{
		delete[] m_data;
		m_data = NULL;
		m_count = 0;
	}

	Array &operator= (const Array &other)
	{
		delete[] m_data;
		m_data = new T[other.m_count];
		m_count = other.m_count;
		for (size_t i = 0; i < m_count; i += 1)
			m_data[i] = other[i];

		return *this;
	}

	T &operator[] (size_t index)
	{
		if (index >= m_count)
			throw OutOfBoundsException ();
		return m_data[index];
	}

	const T &operator[] (size_t index) const
	{
		if (index >= m_count)
			throw OutOfBoundsException ();
		return m_data[index];
	}

	size_t size () const { return m_count; }

private:
	T *m_data;
	size_t m_count;
};

#endif
