#include <iostream>

using namespace std;
int main() {

int weight;
float height;
int index;


cout << "Welcome to the body mass index calculation program .." << endl;

cout << "Please enter your height (exp: 1.55,1.85):";
cin >> height;

cout << "Enter your weight (eg 48.55):";
cin >> weight;

index = weight / (height * height);

if (index <18) {

cout << "Your weight is below ideal weight";
}


else if (index <24) {

cout << "Your weight is ideal.";
}

else if (index <34) {

cout << "Your weight is above ideal weight";
}

else {

cout << "Your weight is well above ideal weight";
}
}

	
