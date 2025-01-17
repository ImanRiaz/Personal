#include<iostream>
using namespace std;

int main() {
	int i;
	int sum = 0;


	i = 1;
	while (i <= 4) {

		cout << i << "*" << i << "=" << i * i << endl;
		sum = sum + (i * i);
		i++;


	}
	cout << "the sum is: " << sum;
	return 0;
}

