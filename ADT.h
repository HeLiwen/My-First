/*
ADT:abstract data type ������������
�����ĳ�����������ʵ��
*/
#include <iostream>
#include <assert.h>

using namespace std;

class Complex
{
public:
	Complex(float v1 = 0.0, float v2 = 0.0) :real(v1), imag(v2){}//���캯��
	float GetReal()const;
	float GetImag()const;//ȡ����ʵ�����鲿
	void SetReal(float v1);
	void SetImag(float v2);//����ʵ�����鲿
	Complex operator+(const Complex z);//������
	Complex operator-(const Complex z);//������
	Complex operator*(const Complex z);//������
	Complex operator/(const Complex z);//������
	friend istream &operator>>(istream &in, Complex &z);//�������������ʵ�ָ����������
	friend ostream &operator<<(ostream &out, const Complex z);
private:
	float real, imag;//�ֱ��ʾ������ʵ�����鲿��������

};
