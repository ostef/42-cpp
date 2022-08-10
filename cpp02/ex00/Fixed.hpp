#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
public:
	Fixed ();
	Fixed (const Fixed &other);
	~Fixed ();
	Fixed &operator = (const Fixed &other);

	int getRawBits () const;
	void setRawBits (const int raw);

private:
	static const int FRACT_BITS;

	int	m_raw;
};

#endif
