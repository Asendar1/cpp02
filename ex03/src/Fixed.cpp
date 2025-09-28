#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
}

Fixed::Fixed(const int n)
{
	this->_value = n << this->_bits;
}

Fixed::Fixed(const float f) : _value(roundf(f * (1 << this->_bits)))
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &copy) : _value(copy._value)
{
}

Fixed& Fixed::operator=(const Fixed &assign)
{
	if (this != &assign)
		this->_value = assign._value;
	return (*this);
}

bool Fixed::operator>(const Fixed &f) const
{
	return (this->_value > f._value);
}

bool Fixed::operator>=(const Fixed &f) const
{
	return (this->_value >= f._value);
}

bool Fixed::operator<(const Fixed &f) const
{
	return (this->_value < f._value);
}

bool Fixed::operator<=(const Fixed &f) const
{
	return (this->_value <= f._value);
}

bool Fixed::operator==(const Fixed &f) const
{
	return (this->_value == f._value);
}

bool Fixed::operator!=(const Fixed &f) const
{
	return (this->_value != f._value);
}


Fixed Fixed::operator+(const Fixed &f) const
{
	return Fixed(this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed &f) const
{
	return Fixed(this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed &f) const
{
	return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed &f) const
{
	return Fixed(this->toFloat() / f.toFloat());
}

Fixed &Fixed::operator++() // Prefix increment
{
	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int) // Postfix increment
{
	Fixed temp = *this;
	this->_value++;
	return temp;
}

Fixed &Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_value--;
	return temp;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}

int Fixed::getRawBits() const
{
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat() const
{
	return ((float) this->_value / (1 << this->_bits));
}

int Fixed::toInt() const
{
	return (this->_value >> this->_bits);
}


Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
