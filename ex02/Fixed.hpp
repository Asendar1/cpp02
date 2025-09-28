#include <iostream>
#include <cmath>

class Fixed{

	private:
		int _value;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed & operator=(const Fixed &assign);

		bool operator>(const Fixed &f) const;
		bool operator>=(const Fixed &f) const;
		bool operator<(const Fixed &f) const;
		bool operator<=(const Fixed &f) const;
		bool operator==(const Fixed &f) const;
		bool operator!=(const Fixed &f) const;

		Fixed operator+(const Fixed &f) const;
		Fixed operator-(const Fixed &f) const;
		Fixed operator*(const Fixed &f) const;
		Fixed operator/(const Fixed &f) const;
		Fixed &operator++();       // Prefix increment
		Fixed operator++(int);     // Postfix increment
		Fixed &operator--();       // Prefix decrement
		Fixed operator--(int);     // Postfix decrement

		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;

		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
