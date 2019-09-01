//NAME:BILAL ALI
//ROLL NO:BCSF16A030
#include "HugeInteger.h"

HugeInteger::HugeInteger()
{
	digit = new int[40];
	noOfDigits = 0;
	
	for (int i = 0; i < 40; i++)
	{
		this->digit[i] = 0;
	}
	
}

int & HugeInteger::operator[](int index)
{
	return this->digit[index];
}

HugeInteger HugeInteger::operator+(HugeInteger & ref)
{
	HugeInteger temp;
	if ((*this) < ref)
	{
		temp.noOfDigits = ref.noOfDigits;
	}
	else 
	{
		temp.noOfDigits = this->noOfDigits;
	}
	bool status = 0;
	int t;
	
	for (int i = 0; i < 40; i++)
	{
		temp.digit[i] = 0;
	}
	
	for (int i =39; i >=(39-temp.noOfDigits); i--)
	{
		temp.digit[i] = temp.digit[i]+this->digit[i] + ref.digit[i];
		
		if (temp.digit[i] >= 10)
		{
			temp.digit[i] = temp.digit[i] - 10;
			status = 1;
			temp.digit[i - 1] = 1;

		}
		
		
	}
	
	return temp;
}

HugeInteger HugeInteger::operator-(HugeInteger & ref)
{
	bool s = 0;
	HugeInteger temp;
	if ((*this) < ref)
	{
		temp.noOfDigits = ref.noOfDigits;
	}
	else if ((*this) > ref)
	{
		temp.noOfDigits = this->noOfDigits;
	}
	if ((*this) < (ref))
	{
		s = 1;
		for (int i = 39; i >= (39 - temp.noOfDigits); i--)
		{
			if (ref.digit[i] < this->digit[i])
			{
				ref.digit[i] = ref.digit[i] + 10;
				ref.digit[i - 1] = ref.digit[i - 1] - 1;
				temp.digit[i] = ref.digit[i] - this->digit[i];

			}
			else
			{
				temp.digit[i] =  ref.digit[i] - this->digit[i];

			}
		}
	}
	else
	{
		for (int i = 39; i >= (39 - temp.noOfDigits); i--)
		{
			if (this->digit[i] < ref.digit[i])
			{
				this->digit[i] = this->digit[i] + 10;
				this->digit[i - 1] = this->digit[i - 1] - 1;
				temp.digit[i] = this->digit[i] - ref.digit[i];

			}
			else
			{
				temp.digit[i] = this->digit[i] - ref.digit[i];

			}
		}
	}
	
	return temp;
	
	
}

bool HugeInteger::operator==(HugeInteger & ref)
{
	for (int i = 0; i < 40; i++)
	{
		if (this->digit[i] != ref.digit[i])
		{
			return false;
		}
	}
	return true;
}

bool HugeInteger::operator!=(HugeInteger & ref)
{

	for (int i = 0;i< 40; i++)
	{
		if (this->digit[i] != ref.digit[i])
		{
			return true;
		}
	}
	return false;
}

bool HugeInteger::operator>(HugeInteger & ref)
{
	if (this->noOfDigits > ref.noOfDigits)
	{
		return true;
	}
	else
	{
		for (int i = 0; i<40; i++)
		{
			if (this->digit[i] > ref.digit[i])
				return true;
			else if (this->digit[i] < ref.digit[i])
				return false;
			else
			{
				if (this->digit[i + 1] > ref.digit[i + 1])
				{
					return true;
				}
			}
		}
		return false;
	}
	
}

bool HugeInteger::operator<(HugeInteger & ref)
{
	
	if (this->noOfDigits < ref.noOfDigits)
	{
		return true;
	}
	else
	{
		for (int i = 0; i<40; i++)
		{
			if (this->digit[i] < ref.digit[i])
				return true;
			else if (this->digit[i] > ref.digit[i])
				return false;
			else
			{
				if (this->digit[i + 1] < ref.digit[i + 1])
				{
					return true;
				}
			}
		}
	}
}

bool HugeInteger::operator<=(HugeInteger & ref)
{
	if ((this->noOfDigits) < (ref.noOfDigits))
	{
		return true;
	}
	else
	{
		for (int i = 0; i<40; i++)
		{
			if (this->digit[i] < ref.digit[i])
				return true;
			else if (this->digit[i] > ref.digit[i])
				return false;
			else
			{
				if (this->digit[i + 1] < ref.digit[i + 1])
				{
					return true;
				}
			}
		}
		for (int i = 0; i<40; i++)
		{
			if (this->digit[i] != ref.digit[i])
			{
				return false;
			}
		}
		return true;
	}
}
bool HugeInteger::operator>=(HugeInteger & ref)
{
	if ((this->noOfDigits) > (ref.noOfDigits))
	{
		return true;
	}
	else
	{
		for (int i = 0; i<40; i++)
		{
			if (this->digit[i] > ref.digit[i])
				return true;
			else if (this->digit[i] < ref.digit[i])
				return false;
			else
			{
				if (this->digit[i + 1] > ref.digit[i + 1])
				{
					return true;
				}
			}
		}
		for (int i = 0; this->noOfDigits; i++)
		{
			if (this->digit[i] != ref.digit[i])
			{
				return false;
			}
		}
		return true;
	}
}

bool HugeInteger::isZero()
{
	for (int i = 0; i<40; i++)
	{
		if (this->digit[i] != 0)
			return false;
	}
	return true;
}

HugeInteger HugeInteger::operator*(HugeInteger & ref)
{

	HugeInteger temp;
	temp = (*this);
	HugeInteger counter,inc;
	inc.digit[39] = 1;
	inc.noOfDigits = 1;
	counter.digit[39] = 2;
	counter.noOfDigits = 1;

	while (counter < ref)
	{
		temp = temp + (*this);
		counter = counter + inc;
		counter.noOfDigits++;
	}

	return temp;

}

