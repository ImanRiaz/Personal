#include<iostream>
using namespace std;
int main() {
	int num1, num2, sum;
	bool invalidinput = false;
	do{
		try {
		cout << "Enter number one:" << endl;
		if (!(cin >> num1)) {
			throw "Input is not an integer!";
		}

		cout << "Enter second number:" << endl;
		if (!(cin >> num2)) {
			throw "Input is not integer!";
		}
		sum = num1 + num2;
		cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
		invalidinput = true;
	}
	catch (const char* abc) {
		cout << "Exception : " << abc << endl;
		cin.clear();
		cin.ignore(10000, '\n');
	}

	} while (! invalidinput);
	return 0;
}