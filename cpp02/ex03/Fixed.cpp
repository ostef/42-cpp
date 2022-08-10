#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// |         integral          |  fractional  |
// 32           ...            8     ...      0
const int Fixed::FRACT_BITS = 8;

Fixed::Fixed () : m_raw (0)
{
	std::cout << "Default constructor called... Yay..." << std::endl;
}

Fixed::Fixed (const int i) : m_raw (0)
{
	std::cout << "Constructor (const int i) called... Yay..." << std::endl;
	m_raw = i << FRACT_BITS;
}

Fixed::Fixed (const float f) : m_raw (0)
{
	std::cout << "Constructor (const float f) called... Yay..." << std::endl;
	m_raw = roundf (f * (1 << FRACT_BITS));
}

Fixed::Fixed (const Fixed &other) : m_raw (other.m_raw)
{
	std::cout << "Copy constructor called... Yay..." << std::endl;
}

Fixed::~Fixed ()
{
	std::cout << "Destructor called... Yay..." << std::endl;
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Assignment operator called... Yay..." << std::endl;
	m_raw = other.m_raw;

	return *this;
}

Fixed &Fixed::min (Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min (const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max (Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max (const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

int Fixed::getRawBits () const
{
	std::cout << "getRawBits member function called... Yay..." << std::endl;

	return m_raw;
}

void Fixed::setRawBits (const int raw)
{
	std::cout << "setRawBits member function called... Yay..." << std::endl;
	m_raw = raw;
}

float Fixed::toFloat () const
{
	return (float)m_raw / (float)(1 << FRACT_BITS);
}

int Fixed::toInt () const
{
	return m_raw >> FRACT_BITS;
}

Fixed Fixed::operator + (const Fixed &other) const
{
	Fixed result;
	result.m_raw = m_raw + other.m_raw;

	return result;
}

Fixed Fixed::operator - (const Fixed &other) const
{
	Fixed result;
	result.m_raw = m_raw - other.m_raw;

	return result;
}

Fixed Fixed::operator * (const Fixed &other) const
{
	Fixed result;
	result.m_raw = (m_raw * other.m_raw) / (1 << FRACT_BITS);

	return result;
}

Fixed Fixed::operator / (const Fixed &other) const
{
	Fixed result;
	result.m_raw = (m_raw * (1 << FRACT_BITS)) / other.m_raw;

	return result;
}

Fixed &Fixed::operator ++ ()
{
	m_raw += 1;

	return *this;
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp = *this;
	m_raw += 1;

	return temp;
}

Fixed &Fixed::operator -- ()
{
	m_raw -= 1;

	return *this;
}

Fixed Fixed::operator -- (int)
{
	Fixed temp = *this;
	m_raw -= 1;

	return temp;
}

bool Fixed::operator <  (const Fixed &other) const
{
	return m_raw < other.m_raw;
}

bool Fixed::operator <= (const Fixed &other) const
{
	return m_raw <= other.m_raw;
}

bool Fixed::operator >  (const Fixed &other) const
{
	return m_raw > other.m_raw;
}

bool Fixed::operator >= (const Fixed &other) const
{
	return m_raw >= other.m_raw;
}

bool Fixed::operator == (const Fixed &other) const
{
	return m_raw == other.m_raw;
}

bool Fixed::operator != (const Fixed &other) const
{
	return m_raw != other.m_raw;
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
	return out << fixed.toFloat ();
}
