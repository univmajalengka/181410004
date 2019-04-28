//Input Output Array
#include <iostream>
using namespace std;

int main()

{
	//dekrasai Variable
	int element=10;
	int angka[element];
	int i;
	int hasil=0;
	//loop untuk mengisi array
	for(i=0; i<element; i++)
	{
		cout << "masukan data ke -" << i  <<" : ";
		cin >> angka[i];
	}
	
	//jumlah angka yg di input
	for(i=0; i<element; i++)
	{
		hasil = hasil+angka[i];
	}
	
	//Loop untuk mencetak array
	cout << "\n Isi Array : \n";
	for(i=0; i<element; i++)
	{
		cout << angka[i] << "\n";
	
	}
	cout << "\nHasil Penjumlahan :" << hasil;
	
		return 0;
}
