class Complex{
public:
	double a, b;
	Complex(): a(0), b(0) {}
	Complex(double, double);
	void init(double, double);
	Complex& operator=(Complex&);
	Complex& operator+(Complex&);
	Complex& operator-(Complex&);
	Complex& operator*(Complex&);
	Complex& operator/(Complex&);
	bool equ(Complex&, Complex&);
	Complex& conj(Complex&);
};

class ColorComplex: public Complex{

};