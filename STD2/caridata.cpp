/*	*
	*	caridata.cpp
	*	Contoh penanganan untuk mencari suatu
	*	data didalam array
	*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, x, ketemu;

	int data[] = {5, 100, 20, 31, 77, 88, 99, 20, 55, 1};

	cout<<"isi Data: 5, 100, 20, 31, 77, 88, 99, 20, 55, 1\n";
	cout<<"Data yang anda cari: "; cin>>x;

	ketemu = 0;

	for (i = 0; i< sizeof(data) / sizeof(int); i++)
	{
		if (data[i] == x)
		{
			ketemu =! ketemu;		// switch menjadi benar
			break;
		}
	}
	if (ketemu)
	{
		cout<<"Data tersebut ada pada posisi ke-"<<i+1<<endl;
	}
	else
	{
		cout<<"Data tersebut tidak ada!"<<endl;
	}
	return 0;
}