#include <iostream>
#include <iomanip>

using namespace std;

int main(){
 int M [3] [3];
 int m1 [3] [3];
 int m2 [3] [3];
 for (int i = 0; i < 3; i++){
     for (int j = 0; j < 3; j++){
	 cout << "Masukan data matriks 1 index " << i <<"." <<j << " : " ;
	 cin >> m1 [i] [j];
	 cout << "Masukan data matriks 2 index " << i <<"." <<j << " : " ;
	 cin >> m2 [i] [j];
	 M[i] [j] = m1 [i] [j] + m2 [i] [j];
	 }
}
	cout << "-----------------------" << endl;
	for (int i = 0; i <3; i++){
	
		for (int j = 0; j <3; j++){
		cout << M [i] [j] << " | ";
	
		
		}
		cout << endl;
	}
	  cout << "-----------------------" << endl;
		return 0;
		}