#include <iostream>
#include <locale>
using namespace std;

int main() {

	int sayi;
	int faktoriyel=1;

	cout << "Faktöriyelini hesaplamak istediğiniz sayıyı giriniz: ";
	cin >> sayi;


	for (int i = 2; i <= sayi; i++)
	{
		faktoriyel = faktoriyel * i;
	}

	cout << "Sonuç: " << faktoriyel;


}
