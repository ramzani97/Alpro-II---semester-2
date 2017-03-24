#include <iostream>
using namespace std;

//prototype
void prosesbaca ();
int prosestambah ();
int proseskurang ();
void prosestampil ();

//variabel global
	int a,b;

//program utama
int main () {
	prosesbaca ();
	prosestampil ();
	return 0;
}

// proses membaca
void prosesbaca () {
		cout <<"masukkan nilai A: ";
		cin >> a;

		cout << "masukkan nilai B: ";
		cin >> b;
}

//proses tambah
int prosestambah () {
	return a + b;
}

//proses kurang
int proseskurang () {
	int hasil;
	hasil = a-b;
	
	return hasil;
}

//prosestampil
	void prosestampil () {
	cout << "hasil tambah : " << prosestambah () <<endl;
	cout << "hasil kurang: " << proseskurang ();

}