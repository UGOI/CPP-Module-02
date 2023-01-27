#include <iostream>

class Fixed
{
private:
	int                 _fixedPointValue;
	static const int    _fractionalBits = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const Fixed &copy);
	Fixed(const float value);
	~Fixed();
	Fixed &operator=(const Fixed &copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fp);