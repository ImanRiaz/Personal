#include<iostream>
using namespace std;

int main()
{
	int i, j;

	for (i = 1;i <= 5;i++)
	{
		for (j = i;j <= i;j++) {
			cout << "*";
		}
		cout << endl;
   }
	return 0;
}