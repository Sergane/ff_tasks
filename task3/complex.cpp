#include "complex.h"

Complex::Complex(double par_a, double par_b){
	a = par_a;
	b = par_b;
}

void Complex::init(double par_a, double par_b){
	a = par_a;
	b = par_b;
}

Complex& Complex::operator=(Complex & num){
	a = num.a;
	b = num.b;
	return num;
}

Complex& Complex::operator+(Complex & num){
	Complex *temp;
	*temp = *this;
	temp->a += num.a;
	temp->b += num.b;
	return *temp;
}

Complex& Complex::operator-(Complex & num){
	Complex *temp;
	*temp = *this;
	temp->a -= num.a;
	temp->b -= num.b;
	return *temp;
}

Complex& Complex::operator*(Complex & num){
	// (ac-bd, ad+bc)
	// c = num.a
	// d = num.b
	// (a*num.a-b*num.b, a*num.b+b*num.a)
	Complex *temp;
	temp->a = a*num.a - b*num.b;
	temp->b = a*num.b + b*num.a;
	return *temp;
}

Complex& Complex::operator/(Complex & num){
	// (ac+bd, bc-ad) / (c^2 + d^2)
	// c = num.a
	// d = num.b
	Complex *temp;
	temp->a = a*num.a + b*num.b;
	temp->a /= num.a*num.a + num.b*num.b;
	temp->b = -a*num.b + b*num.a;
	temp->b /= num.a*num.a + num.b*num.b;
	return *temp;
}

bool Complex::equ(Complex & x, Complex & y){
	if(x.a == y.a && x.b == y.b)
		return true;
	return false;
}

Complex& Complex::conj(Complex & x){
	Complex *temp;
	temp->a = x.a;
	temp->b = -x.b;
	return *temp;
}