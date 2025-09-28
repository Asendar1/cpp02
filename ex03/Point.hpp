#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float a, const float b);
		Point(const Point &copy);
		Point &operator=(const Point &assign);
		~Point();
};
