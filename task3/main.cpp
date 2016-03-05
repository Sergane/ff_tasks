#include "complex.h"
#include <iostream>

using namespace std;

int main(){
	Complex x(1, 2);
	Complex y(3, 4);
	Complex z;
	z = x / y;
	cout << x.a << " " << x.b << endl;
	cout << y.a << " " << y.b << endl;
	cout << z.a << " " << z.b << endl;
	return 0;
}