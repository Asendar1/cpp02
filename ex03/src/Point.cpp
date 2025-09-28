#include "Point.hpp"


Point::Point() : x(0), y(0)
{
	// Default constructor
}

Point::Point(const float a, const float b) : x(a), y(b)
{

}

Point::Point(const Point &copy): x(copy.x), y(copy.y)
{

}

Point &Point::operator=(const Point &assign)
{
	// this overload is useless because x and y are const
	(void)assign;
	return *this;
}

Point::~Point()
{
	// Destructor
}

Fixed Point::getX() const
{
	return this->x;
}

Fixed Point::getY() const
{
	return this->y;
}
