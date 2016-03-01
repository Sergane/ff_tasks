#include <iostream>

using namespace std;

template <typename T>
class Stack{
	T *st, *temp;
public:
	int top_i, length;
	
	Stack();
	~Stack();

	void push(T);
	void pop();
	T top();

	Stack<T>& operator=(Stack<T>&);
  	friend ostream& operator<<(ostream& out, Stack<T>& s){
  		int len = s.length;
  		T *tmp = new T[len];
  		for(int i = 0; i < len; ++i){
  			tmp[i] = s.top();
  			s.pop();
  		}
  		for(int i = len-1; i >= 0; --i){
  			s.push(tmp[i]);
  			out << s.top() << " ";
  		}
  		out << endl;
  		return out;
	}
	friend istream& operator>>(istream& in, Stack<T>& s){
		cout << "Number of new elements: ";
		int n;
		T tmp;
		cin >> n;
		for(int i = 0; i < n; ++i){
			in >> tmp;
			s.push(tmp);
		}
		return in;
	}
};

template class Stack<double>;
template class Stack<int>;
template class Stack<char>;
