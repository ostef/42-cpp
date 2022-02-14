#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed ();
	Fixed (const int i);
	Fixed (const float f);
	Fixed (const Fixed &other);
	~Fixed ();
	Fixed &operator = (const Fixed &other);

	int getRawBits () const;
	void setRawBits (const int raw);
	float toFloat () const;
	int toInt () const;


private:
	static const int FRACT_BITS;

	int	m_raw;
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif
