#include <iostream> 
using namespace std;

int main() {
int i,j;
string nama[10];
	for (i=0;i<10;i++) {
		j=i+1;
		cout << "isi nama ke" <<j <<": ";
		cin >> nama[i]; 
	}
cout << "====  Nama yang telah diinput  =====" << endl;
	
	for (i=0;i<10;i++) {
	cout << nama[i] << endl;
	}
	return (0);
}