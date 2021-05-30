#include<string>
#include<iostream>

using namespace std;

std::string input;
char predict[50];
int index = 0;
void main(void) {
	cout << "pattern : " << endl;
	getline(cin, input);
	int state_0 = 0;
	int state_1 = 0;
	int state_2 = 0;
	int state_3 = 0;
	std::string state0_c;
	std::string state1_c;
	std::string state2_c;
	std::string state3_c;
	int change_state = 0;


	cout << "predict : " << endl;

	while (input[index] != '\0') {
		switch(change_state) {
		case 0:
			switch (state_0) {
			case 0:
				predict[index] = 'N';
				if (input[index] == 'T')
					state_0 += 1;
				else
					state_0 = 0;
				break;
			case 1:
				predict[index] = 'N';
				if (input[index] == 'T')
					state_0 += 1;
				else
					state_0 -= 1;
				break;
			case 2:
				predict[index] = 'T';
				if (input[index] == 'T')
					state_0 += 1;
				else
					state_0 -= 1;
				break;
			case 3:
				predict[index] = 'T';
				if (input[index] == 'T')
					state_0 = 3;
				else
					state_0 -= 1;
				break;
			}
			break;
		case 1:
			switch (state_1) {
			case 0:
				predict[index] = 'N';
				if (input[index] == 'T')
					state_1 += 1;
				else
					state_1 = 0;
				break;
			case 1:
				predict[index] = 'N';
				if (input[index] == 'T')
					state_1 += 1;
				else
					state_1 -= 1;
				break;
			case 2:
				predict[index] = 'T';
				if (input[index] == 'T')
					state_1 += 1;
				else
					state_1 -= 1;
				break;
			case 3:
				predict[index] = 'T';
				if (input[index] == 'T')
					state_1 = 3;
				else
					state_1 -= 1;
				break;
			}
			break;
		case 2:
			switch (state_2) {
			case 0:
				predict[index] = 'N';
				if (input[index] == 'T')
					state_2 += 1;
				else
					state_2 = 0;
				break;
			case 1:
				predict[index] = 'N';
				if (input[index] == 'T')
					state_2 += 1;
				else
					state_2 -= 1;
				break;
			case 2:
				predict[index] = 'T';
				if (input[index] == 'T')
					state_2 += 1;
				else
					state_2 -= 1;
				break;
			case 3:
				predict[index] = 'T';
				if (input[index] == 'T')
					state_2 = 3;
				else
					state_2 -= 1;
				break;
			}
			break;
		case 3:
			switch (state_3) {
			case 0:
				predict[index] = 'N';
				if (input[index] == 'T')
					state_3 += 1;
				else
					state_3 = 0;
				break;
			case 1:
				predict[index] = 'N';
				if (input[index] == 'T')
					state_3 += 1;
				else
					state_3 -= 1;
				break;
			case 2:
				predict[index] = 'T';
				if (input[index] == 'T')
					state_3 += 1;
				else
					state_3 -= 1;
				break;
			case 3:
				predict[index] = 'T';
				if (input[index] == 'T')
					state_3 = 3;
				else
					state_3 -= 1;
				break;
			}
			break;								
		}
		if (index == 0 && input[1] == 'T')
			change_state = 1;
		else if (index == 0 && input[1] == 'N')
			change_state = 0;
		else
		{
			change_state = 0;
			if (input[index - 1] == 'T')
				change_state += 2;
			if (input[index] == 'T')
				change_state += 1;
		}
		index += 1;
	}
	cout << predict;


}
