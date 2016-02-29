#include "rectangle.h"
#include <iostream>

using namespace std;
int main() {
	Rectangle rect1(2, 4);
	Rectangle rect2(3, 5);
	Rectangle rect = rect1;
	rect = rect2;
	rect + rect2;
	cout << "width: " << rect.getWidth() << "\nheight: " \
	 	 << rect.getHeight() << endl;

	if(rect2 > rect1) cout << "rect2 > rect1" << endl;
	else cout << "rect1 > rect2" << endl;

	cout << "width: " << rect.getWidth() << endl;
	cout << "width: " << (rect++).getWidth();
	cout << "\nwidth: " << rect.getWidth() << endl;
	cout << "width: " << (++rect).getWidth();
	return 0;
}