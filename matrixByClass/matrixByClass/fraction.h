#ifndef FRACTION_H
#define FRACTION_H
using namespace std;
class Fraction
{
private:
	int denomirator;
	int numerator;
	int GCD(int r, int c);
	void reduceFraction();
public:
	Fraction(int n = 1, int d = 1);
	void display();
	Fraction operator + (const Fraction &ref);
	Fraction operator - (const Fraction &ref);
	Fraction operator * (const Fraction &ref);
	Fraction operator / (const Fraction &ref);
	Fraction operator = (const Fraction &ref)
	{
		this->denomirator = ref.denomirator;
		this->numerator = ref.numerator;
		return *this;
	}
	void operator += (const Fraction &ref)
	{
		*this = (*this) + ref;
		//return *this;
	}
	void operator -= (const Fraction &ref)
	{
		*this = (*this) - ref;
		//return *this;
	}
	void operator *= (const Fraction &ref)
	{
		*this = (*this) * ref;
		//return *this;
	}
	void operator /= (const Fraction &ref)
	{
		*this = (*this) / ref;
		//return *this;
	}
	bool operator==(const Fraction &ref)
	{
		if ((this->numerator == ref.numerator) && (this->denomirator == ref.denomirator))
			return true;
		return false;
	}
	bool operator!=(const Fraction &ref)
	{
		if (*this == ref)
			return false;
		return true;
	}
	bool operator>=(const Fraction &ref)
	{
		Fraction temp(*this - ref);
		if ((temp.denomirator >= 0) && (temp.numerator >= 0))
			return true;
		return false;
	}
	bool operator<=(const Fraction &ref)
	{
		Fraction temp(*this - ref);
		if ((temp.denomirator <= 0) || (temp.numerator <= 0))
			return true;
		return false;
	}
	bool operator>(const Fraction &ref)
	{
		Fraction temp(*this - ref);
		if ((temp.denomirator > 0) && (temp.numerator > 0))
			return true;
		return false;
	}
	bool operator<(const Fraction &ref)
	{
		Fraction temp(*this - ref);
		if ((temp.denomirator < 0) || (temp.numerator < 0))
			return true;
		return false;
	}
	Fraction operator++(int)
	{
		Fraction temp(*this);
		Fraction ident;
		*this += ident;
		return temp;
	}
	Fraction operator++()
	{
		Fraction ident;
		*this += ident;
		return *this;
	}
	Fraction operator--(int)
	{
		Fraction temp(*this);
		Fraction ident;
		*this -= ident;
		return temp;
	}
	Fraction operator--()
	{
		Fraction ident;
		*this -= ident;
		return *this;
	}
	operator double()
	{
		double frac = (double)numerator / (double)denomirator;
		return frac;
	}
	Fraction operator-()
	{
		Fraction temp(*this);
		temp = temp*temp;
		temp = temp - (*this);
		return temp;
	}
};

#endif // !FRACTION_H
