#include<stdio.h>
#include<cstdlib>
#include<string>
#include<iostream>

using namespace std;

std::string input;
char output[50];
void main(void) {
	getline(cin, input);
	int state = 0;
	int index = 0;
	while (input[index] != '\0') {
		switch(state) {
		case 0:
			output[index] = 'N';
			if (input[index] == 'T')
				state = state + 1;
			else
				state = 0;
			break;
		case 1:
			output[index] = 'N';
			if (input[index] == 'T')
				state = state + 1;
			else
				state = state - 1;
			break;
		case 2:
			output[index] = 'T';
			if (input[index] == 'T')
				state = state + 1;
			else
				state = state - 1;
			break;
		case 3:
			output[index] = 'T';
			if (input[index] == 'T')
				state = 3;
			else
				state = state - 1;		
			break;
		}
		index = index + 1;
	}
	cout << "predict_output:" << endl << output << endl;


}