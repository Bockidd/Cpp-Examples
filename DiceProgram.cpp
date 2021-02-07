#include <iostream>
using namespace std;
#include <time.h> 


//zar atma oyunu
int main() {

  setlocale(LC_ALL, "Turkish");

  int random;
  int start;

  cout << "Zar atma programına hoşgeldiniz.! "<<endl;
  cout << "Zarları atmak için 1'e basın: ";

  cin >> start;



  if (start == 1) {

	  srand(time(0));

	  random = rand() % 6 + 1;

	  cout << "Birinci zar: " << random << endl;


	  random = rand() % 6 + 1;
	  cout << "İkinci zar: " << random;
  }
}
