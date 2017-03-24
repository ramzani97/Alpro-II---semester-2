#include <iostream>
using namespace std;

int main () {

	// variabel
	int a, b, temp;
	

	// Proses membaca
	cout << " Masukan nilai A : ";
	cin >> a;
	
	cout << " Masukan nilai B : ";
	cin >> b;

	// Proses Tukar
	temp = b;
	b = a;
	a = temp;

	// Proses Tampil
	cout << "================================" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b;

	return 0;
}