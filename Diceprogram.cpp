#include <iostream>
using namespace std;
#include <time.h> 
// dice game

int main () {
 
int random;
int start;

cout << "Welcome to the dice roll program!" << endl;
cout << "Press 1 to roll the dice:";

cin >> start;

if (start == 1) {

srand (time (0));

random = rand () % 6 + 1;
//Randomly pick one of 6 numbers
    
cout << "Dice 1:" << random << endl;


random = rand () % 6 + 1;
cout << "Second dice:" << random;
  }
}
