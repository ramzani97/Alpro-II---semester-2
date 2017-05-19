#include <iostream>
using namespace std;

int main() {
int i,x,cari;
bool hasil;
cout<<"masukan banyaknya data :";
cin>> x;

int data[x];
		for (i=0;i<x;i++) {   // Pengulangan //
		cout << "silahkan isi index" <<i<< ": ";
		cin >> data[i]; 
	}

		cout << "masukan data yang dicari :";
		cin >> cari ;
	
	for (i=0;i<x;i++) {
	if (data[i] == cari)
	{hasil=true; }
		else 
	{hasil=false;} }

	if (hasil == true)
	{cout << "ketemu "; }
		else 
	{cout << "notfound ";}
	
return 0;
}