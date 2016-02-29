#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle(){
	width = 1;
	height = 1;
}

Rectangle::Rectangle(const Rectangle & rect){
	width = rect.width;
	height = rect.height;
}

Rectangle::Rectangle(int w, int h){
	setSize(w, h);
}

void Rectangle::setSize(int w, int h){
	width = w;
	height = h;
}

int Rectangle::getWidth(){
	return width;
}

int Rectangle::getHeight(){
	return height;
}

int Rectangle::perimeter(){
	return 2*(width + height);
}

int Rectangle::area(){
	return width * height;
}

Rectangle::~Rectangle(){
	std::cout << "\ndestroyed";
}

void Rectangle::operator=(Rectangle & rect2){
	width = rect2.getWidth();
	height = rect2.getHeight();
}

bool Rectangle::operator>(Rectangle & rect2){
	if(area()>rect2.area() && perimeter()>rect2.perimeter())
		return true;
	return false;
}

void Rectangle::operator+(Rectangle & rect2){
	width += rect2.getWidth();
	height += rect2.getHeight();
}

Rectangle& Rectangle::operator++(){
	width++;
	height++;
	return *this;
}

Rectangle Rectangle::operator++(int){
	Rectangle temp = *this;
	++*this;
	// this->operator++();
	return temp;
}

Rectangle& Rectangle::operator--(){
	if(width > 0)
		width--;
	if(height > 0)
		height--;
	return *this;
}

Rectangle Rectangle::operator--(int){
	Rectangle temp = *this;
	--*this;
	return temp;
}