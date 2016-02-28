#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int sum(string f_name);

int main(){
	string f_name;
	cin >> f_name;
	try{
		int s = sum(f_name);
		cout << "Sum of numbers in file " << \
			f_name << " : " << s << endl;
	}
	catch(int i){
		switch(i){
		case 1:
			cout << "Error while opening file" << endl;
			return -1;
		case 2:
			cout << "File is empty" << endl;
		}
	}

	return 0;
}

int sum(string f_name){
	int sum = 0, temp;
	string line;
	ifstream file(f_name.c_str());

	if(!file)
		throw 1;	//error 1 - error while opening file

	getline(file, line);

	if(line.empty())
		throw 2;	//error 2 - file is empty

	file.close();
	
	string::iterator it;
	for(it = line.begin(); it != line.end(); ++it)
		if(*it < '0' || '9' < *it)
			*it = ' ';

	istringstream iss(line);
	while(iss >> temp)
		sum += temp;

/*	string::reverse_iterator rit;
	bool prev_is_num = true;
	int mult = 1;
	for(rit = line.rbegin(); rit != line.rend(); ++rit){
		if('0' < *rit && *rit < '9'){
			cout << *rit << endl;
			sum += (*rit - '0') * mult;
			prev_is_num = true;
		}
		else
			prev_is_num = false;

		if(prev_is_num)
			mult *= 10;
		else
			mult = 1;
	}*/

	return sum;
}