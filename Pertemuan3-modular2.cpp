#include <iostream>
using namespace std;

//prototype
void prosesbaca();
void prosestukar();
void prosestampil();

	// variabel
	int a, b, temp;
	
//program utama
	int main () {
		prosesbaca();
		prosestukar();
		prosestampil();
	return 0;
	}	
	
	// Proses membaca
	void prosesbaca() {
	cout << " Masukan nilai A : ";
	cin >> a;
	cout << " Masukan nilai B : ";
	cin >> b;
	}

	// Proses Tukar
	void prosestukar() {
	temp = b;
	b = a;
	a = temp;
	}

	// Proses Tampil
	void prosestampil() {
	cout << "================================" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b;
	}