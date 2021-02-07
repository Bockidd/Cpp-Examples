#include <iostream>
using namespace std;
int main()
{

	string color;
	//COLOR GAME V1.1
	cout << "Welcome to the color game!" << endl;
	cout << "Enter the color you want (Blue,green,red,purple,yellow or grey): " << endl;
	cin >> color;

	if (color == "blue") {

		system("color 1");
		//color changing process
		cout << "Everything is blue!!" << endl;
	}
	else if (color == "green") {

		system("color 2");
		cout << "Everything is green!!" << endl;
	}

	else if (color == "red") {

		system("color 4");
		cout << "Everything is red!!" << endl;
	}
	else if (color == "purple") {

		system("color 5");
		cout << "Everything is purple!!" << endl;
	}
	else if (color == "yellow") {

		system("color 6");
		cout << "Everything is yellow!!" << endl;
	}
	
	else if (color == "grey") {

		system("color 8");
		cout << "Everything is grey!!" << endl;
	}

	
	
}
