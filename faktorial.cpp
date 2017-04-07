#include <iostream>
using namespace std;

int main()
{
 int n,faktor=1;
	cout<<"masukkan angka = ";
	cin>>n;
	cout << n <<"!: ";
	cout << n;
 for(int m=n;m>=2;m--)
 {
  faktor=m*faktor;
  cout  << "x" << m-1;
 }
 
 cout<<"= "<<faktor;
 return 0;
}