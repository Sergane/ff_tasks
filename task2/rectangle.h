class Rectangle {
private:
	int width, height;
public:
	Rectangle();
	Rectangle(const Rectangle&);
	Rectangle(int, int);
	void setSize(int, int);
	int getWidth();
	int getHeight();
	int perimeter();
	int area();
	~Rectangle();
	void operator=(Rectangle&);
	bool operator>(Rectangle&);
	void operator+(Rectangle&);
	Rectangle& operator++();      //prefix increment
	Rectangle operator++(int);    //postfix increment
	Rectangle& operator--();      //prefix decrement
	Rectangle operator--(int);    //postfix decrement
};