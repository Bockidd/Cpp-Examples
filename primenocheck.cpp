#include <iostream>
 
using namespace std;
 
int main ()
{
  int number;
  int counter = 0;
 
  cout << "ENTER A NUMBER:";
 
  cin >> number;
 
 for (int j = 2; j <number; j ++)
     {
      if (number% j == 0)
         {
          counter ++;
          break;
         }
     }
 
  if (counter == 0)
     {
      cout << "IS ​​ABOUT." << endl;
     }
 
 else
      cout << "NOT PRIME." << endl;
 }
