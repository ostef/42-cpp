#include "Point.hpp"

Point::Point () :
	m_x (), m_y ()
{
}

Point::Point (const float x, const float y) :
	m_x (x), m_y (y)
{
}

Point::Point (const Point &other)
{
	m_x = other.m_x;
	m_y = other.m_y;
}

~Point::Point ()
{
}

Point &Point::operator = (const Point &other)
{
	m_x = other.m_x;
	m_y = other.m_y;

	return *this;
}
