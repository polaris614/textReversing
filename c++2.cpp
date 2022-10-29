//============================================================================
// Name        : c++2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	string text;
	string reversed;

	cout << "Enter text: " << flush;
	cin >> text;

	char arrText[text.length() + 1];

	strcpy(arrText, text.c_str());

	for(unsigned int i=0; i < sizeof(arrText) - 1; i++) {
		char *pOut = &arrText[sizeof(arrText) - 2];  // neglect null terminator
		char *append = pOut-=i;

		cout << *append << flush;
		reversed.push_back(*append);
	}

	cout << reversed << endl;

	return 0;
}
