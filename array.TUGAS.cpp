#include <iostream> 
using namespace std;

int main() {
int i,x;
cout << endl ;
cout << "-_-_-_-_Aplikasi ini menggunakan ARRAY-_-_-_-_" <<endl ;
cout << "Tentukan banyaknya data!: " ;
cin >> x ;
cout << "=============" << endl;

string nama[x]; // ARRAY //
	for (i=0;i<x;i++) {   // Pengulangan //
	cout << "silahkan isi index" <<i<< ": ";
		cin >> nama[i]; 
	}

cout << "=============" << endl;
cout << "berikut "<<x<<" data yang telah dimasukan :" << endl ;
	cout << "|";
	for (i=0;i<x;i++) { // Pengulangan //
	cout << nama[i] <<"|";
	}
	return (0);
}