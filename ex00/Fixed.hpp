#include <iostream>

class Fixed{

	private:
		int _value;
		static const int _bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed & operator=(const Fixed &assign);
		int getRawBits() const;
		void setRawBits(int const raw);

};
