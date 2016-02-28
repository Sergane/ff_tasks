#include "stack.h"
#include <iostream>

using namespace std;

int main(){
	Stack <double> s;
	s.push(3.14);
	s.push(2.71);
	s.push(3.1415);
	s.pop();
	s.push(3.1415);
	Stack <double> s1;
	s1.push(s.top());
	// cout << s1.top() << endl << s1.length << endl;
	// s1.print();
	s.push(2.71828);
	Stack <double> s2;
	s2 = s1 = s;
	cout << s2 << s1 << s;
	Stack <int> s3;
	cin >> s3;
	cout << s3;
	return 0;
}