#include <stack>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

void rand_input(int stack_len, stack <string> &st);
void input(int &stack_len, stack <string> &st);
void output(stack <string> &st);

int main(){
	stack <string> st;
	int stack_len = 10;
	rand_input(stack_len, st);
	output(st);

	stack <string> st1;
	input(stack_len, st1);
	output(st1);
	return 0;
}

void rand_input(int stack_len, stack <string> &st){
	char *temp;
	int str_len;
	srand(time(NULL));
	for(int i = 0; i < stack_len; ++i){
		str_len = rand() % 13 + 3;
		temp = new char[str_len+1];
		for(int j = 0; j < str_len; ++j){
			temp[j] = rand() % 95 + 32;
		}
		temp[str_len] = '\0';
		st.push(temp);
	}
}

void input(int &stack_len, stack <string> &st){
	string temp;
	cout << "Length of stack: ";
	cin >> stack_len;
	cin.ignore();   // smtimes getline() reads '\n' symbol
	for(int i = 0; i < stack_len; ++i){
		getline(cin, temp);
		st.push(temp);
	}
}

void output(stack <string> &st){
	stack <string> temp;
	cout << "Stack:" << endl;
	while( !(st.empty()) ){
		temp.push(st.top());
		st.pop();
	}
	while( !(temp.empty()) ){
		cout << temp.top() << endl;
		st.push(temp.top());
		temp.pop();
	}
}