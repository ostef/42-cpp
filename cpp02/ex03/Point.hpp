#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
public:
	Point ();
	Point (const float x, const float y);
	Point (const Point &other);
	~Point ();
	Point &operator = (const Point &other);

private:
	const Fixed m_x;
	const Fixed m_y;
}

bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif
