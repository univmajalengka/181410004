#include <iostream>
using namespace std;

void header(){
	cout << "PROGRAM ARRAY SEDERHANA \n";
	cout << "NAMA : RIZKI ALAM R \n";
	cout << "NPM : 18.14.1.0004 \n";
}
int umur[5] = {18,25,29,35,40};
char nama[5][10] = {"RIZKI","hikayat","RIO","tolay","momo"};
int u;

int main(){
	header();
	for(u=0; u < 5; ++u)
	{
		cout << "masukan data dari 0 :";
		cin >> u;
		cout << "Nama :" << nama[u];
		cout << "\n";
		cout << "Umur :" << umur[u];
		cout << "\n";
	}
return 0;
}
