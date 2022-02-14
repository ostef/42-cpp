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

	static Fixed &min (Fixed &a, Fixed &b);
	static const Fixed &min (const Fixed &a, const Fixed &b);
	static Fixed &max (Fixed &a, Fixed &b);
	static const Fixed &max (const Fixed &a, const Fixed &b);

	int getRawBits () const;
	void setRawBits (const int raw);
	float toFloat () const;
	int toInt () const;

	Fixed operator + (const Fixed &other) const;
	Fixed operator - (const Fixed &other) const;
	Fixed operator * (const Fixed &other) const;
	Fixed operator / (const Fixed &other) const;

	Fixed &operator ++ ();
	Fixed operator ++ (int);
	Fixed &operator -- ();
	Fixed operator -- (int);

	bool operator <  (const Fixed &other) const;
	bool operator <= (const Fixed &other) const;
	bool operator >  (const Fixed &other) const;
	bool operator >= (const Fixed &other) const;
	bool operator == (const Fixed &other) const;
	bool operator != (const Fixed &other) const;

private:
	static const int FRACT_BITS;

	int	m_raw;
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif
