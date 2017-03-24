#include <iostream>
using namespace std;
//Mengubah modular4 menjadi input manual

//prototype
int tambahkan (int a, int b);

//program utama
int main () {
int a,b;
cout << "masukan nilai a: ";
cin >> a ;

cout << "masukan nilai b: ";
cin >> b ;
cout << "hasil tambah : " << tambahkan(a,b) << endl;

return 0;
}

int tambahkan (int a, int b)  {
return a + b;
}

