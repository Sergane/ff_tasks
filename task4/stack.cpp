#include "stack.h"
#include <iostream>

using namespace std;

template <typename T>
Stack<T>::Stack(){
  	top_i = -1;
  	length = 0;
  	st = 0;
  	temp = 0;
}

template <typename T>
Stack<T>::~Stack(){
  	if(st != 0){
  		delete [] st;
  		delete [] temp;
   	}
}

template <typename T>
  void Stack<T>::push(T d){
  	if(top_i != -1)
  		for(int i = 0; i < length; ++i)
  			temp[i] = st[i];

  	++length;
  	st = new T[length];

  	if(top_i != -1)
  		for(int i = 0; i < length; ++i)
  			st[i] = temp[i];
  	
  	++top_i;
  	st[top_i] = d;
  	temp = new T[length];
}

template <typename T>
  void Stack<T>::pop(){
  	--top_i;
  	--length;

  	for(int i = 0; i < length; ++i)
  		temp[i] = st[i];

  	st = new T[length];
  	for(int i = 0; i < length; ++i)
  		st[i] = temp[i];

  	temp = new T[length];
}

template <typename T>
  T Stack<T>::top(){
  	return st[top_i];
}


template <typename T>
  Stack<T>& Stack<T>::operator=(Stack<T>& st2){
  	length = st2.length;
  	top_i = st2.top_i;
  	st = new T[length];
  	temp = new T[length];
  	for(int i = 0; i < length; ++i){
  		temp[i] = st2.top();
  		st2.pop();
  	}

  	for(int i = length-1; i >= 0; --i){
  		st2.push(temp[i]);
  		st[length-1-i] = temp[i];
  	}
  	return *this;
}