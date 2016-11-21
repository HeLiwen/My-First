/*
ADT:abstract data type 抽象数据类型
复数的抽象数据类型实现
*/
#include <iostream>
#include <assert.h>

using namespace std;

class Complex
{
public:
	Complex(float v1 = 0.0, float v2 = 0.0) :real(v1), imag(v2){}//构造函数
	float GetReal()const;
	float GetImag()const;//取复数实部和虚部
	void SetReal(float v1);
	void SetImag(float v2);//设置实部和虚部
	Complex operator+(const Complex z);//复数加
	Complex operator-(const Complex z);//复数减
	Complex operator*(const Complex z);//复数乘
	Complex operator/(const Complex z);//复数除
	friend istream &operator>>(istream &in, Complex &z);//重载输入输出流实现复数输入输出
	friend ostream &operator<<(ostream &out, const Complex z);
private:
	float real, imag;//分别表示复数的实部和虚部，浮点型

};
