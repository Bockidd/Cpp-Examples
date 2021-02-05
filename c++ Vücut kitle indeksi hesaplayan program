#include <iostream>

using namespace std;
int main() {

	setlocale(LC_ALL, "Turkish");

	int kilo;
	float boy;
	int indeks;


	cout << "Vücut kitle endeksi hesaplama programına Hoşgeldiniz."<<endl;

	cout << "Lütfen boyunuzu giriniz (örn: 1.55,1.85): ";
	cin >> boy;

	cout << "Kilonuzu giriniz (örn: 48,55): ";
	cin >> kilo;

	indeks = kilo / (boy * boy);

	if (indeks < 18) {
		
		cout << "Kilonuz ideal kilonun altında";
	}


	else if (indeks < 24) {

		cout << "Kilonuz ideal.";
	}

	else if (indeks < 34) {

		cout << "Kilonuz ideal kilonun üzerinde";
	}

	else {

		cout << "Kilonuz ideal kilonun çok üzerinde";
	}
}
