#include "Fixed.hpp"
#include <iostream>

const int Fixed::FRACT_BITS = 8;

Fixed::Fixed () : m_raw (0)
{
	std::cout << "Default constructor called... Yay..." << std::endl;
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
