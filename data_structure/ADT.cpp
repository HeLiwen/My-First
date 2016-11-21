#include "ADT.h"

float Complex::GetReal()const
{
	return real;
}

float Complex::GetImag()const
{
	return imag;
}

void Complex::SetReal(float v1)
{
	real = v1;
}

void Complex::SetImag(float v2)
{
	imag = v2;
}


Complex Complex::operator+(const Complex z)
{
	Complex result;
	result.real = real + z.real;
	result.imag = imag + z.imag;
	return result;
}

Complex Complex::operator-(const Complex z)
{
	Complex result;
	result.real = real - z.real;
	result.imag = imag - z.imag;
	return result;
}

Complex Complex::operator*(const Complex z)
{
	Complex result;
	result.real = real*z.real - imag *z.imag;
	result.imag = real*z.real + imag *z.imag;
	return result;
}

Complex Complex::operator/(const Complex z)
{
	Complex result;
	assert(z.real != 0.0 && z.imag != 0.0);
	result.real = (real*z.real + imag *z.imag) / (z.real*z.real + z.imag *z.imag);
	result.real = (real*z.real - imag *z.imag) / (z.real*z.real + z.imag *z.imag);
	return result;
}

istream& operator>>(istream &in, Complex &z)//��������������������Ϊһ���������
{
	cout << "������һ��������" << endl;
	cout << "ʵ��Ϊ��";
	in >> z.real;
	cout << "�鲿Ϊ��";
	in >> z.imag;
	return in;
}


ostream &operator<<(ostream &out, const Complex z)//���������
{
	if (z.real==0)
	{
		out << " ";
	}
	else
	{
		out << z.real;
	}

	if (z.imag<0)
	{
		if (z.imag!=-1)
		{
			out << z.imag << "i" << endl;
		}
		else out << "- i" << endl;
	}

	if (z.imag==0)
	{
		out << endl;
	} 
	else
	{
		if (z.imag!=1)
		{
			out << "+" << z.imag << "i" << endl;
		} 
		else
		{
			out << "+ i" << endl;
		}
	}
	return out;
}