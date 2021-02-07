#include <iostream>
using namespace std;
int main ()
{
int number;
int even = 0;
int odd = 0;
int sumeven = 0;
int sumodd = 0;
cout << "Enter 10 numbers:" << endl;
for (int i = 0; i <10; i ++)
{
cin >> number;
if (number% 2 == 0) {

even = even + 1;
sumeven = sumeven + number;

}
else {
odd = odd + 1;
sumodd = sumodd + number;

}
}
cout << "Number of even numbers entered:" << even << endl;
cout << "Number of odd numbers entered:" << odd << endl;

cout << "Sum of even numbers:" << sumeven << endl;
cout << "Sum of odd numbers:" << sumodd << endl;


}
