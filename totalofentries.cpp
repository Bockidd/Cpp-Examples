#include <iostream>
using namespace std;

int main() {
	//10 numbers will be entered on the keyboard and the sum of the 10 numbers will be found.

	int number;
	cout << "10 Enter numbers: " << endl;
	int total=0;

	for (int i = 0; i < 10; i++)
	{
		cin >> number;
		total = total + number;
		//The numbers entered are added up

	}
	//Numbers entered 10 times
    
	cout << total;

}
