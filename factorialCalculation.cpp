#include <iostream>
#include <locale>
using namespace std;

int main () (

int number;
int factorial = 1;

cout << "Enter the number whose factorial you want to calculate:";
cin >> number;


for (int i = 2; i <= number; i ++)
{
factorial = factorial * i;
}
//Numbers are sequentially multiplied with each other

cout << "Result:" << factorial;


}
