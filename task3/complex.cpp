#include "complex.h"
#include <iostream>
#include <typeinfo>

using namespace std;

Complex::Complex(double par_a, double par_b){
	a = par_a;
	b = par_b;
}

Complex::Complex(const Complex & num){
	a = num.a;
	b = num.b;
}

void Complex::init(double par_a, double par_b){
	a = par_a;
	b = par_b;
}

Complex Complex::operator=(Complex num){
	a = num.a;
	b = num.b;
	return num;
}

Complex Complex::operator+(Complex num){
	Complex temp;
	temp.a = a + num.a;
	temp.b = b + num.b;
	return temp;
}

Complex Complex::operator-(Complex num){
	Complex temp;
	temp.a = a - num.a;
	temp.b = b - num.b;
	return temp;
}

Complex Complex::operator*(Complex num){
	// (ac-bd, ad+bc)
	double c = num.a;
	double d = num.b;
	Complex temp;
	temp.a = a*c - b*d;
	temp.b = a*d + b*c;
	return temp;
}

Complex Complex::operator/(Complex num){
	// (ac+bd, bc-ad) / (c^2 + d^2)
	double c = num.a;
	double d = num.b;
	Complex temp;
	temp.a = a*c + b*d;
	temp.a /= c*c + d*d;
	temp.b = b*c - a*d;
	temp.b /= c*c + d*d;
	return temp;
}

bool Complex::equ(Complex x, Complex y){
	if(x.a == y.a && x.b == y.b)
		return true;
	return false;
}

Complex Complex::conj(Complex x){
	Complex temp;
	temp.a = x.a;
	temp.b = -x.b;
	return temp;
}