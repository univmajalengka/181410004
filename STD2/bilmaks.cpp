/*	*
	*	bilmaks.cpp
	*
	*	memperoleh bilangan terbesar yang
	*	ada pada array
	*
	*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{

	int MAKS = 10;
	int data[MAKS];
	int maks;

	// memperoleh data secara acak

	rand();
	for (int i=0; i< MAKS; i++)
	{
		data[i] = rand();
	}

	// menampilkan data dan mencari data terbesar
	cout<<"Data: "<<endl;
	cout<<data[0]<<endl;
	maks = data[0];				// isi dengan data pertama

	for (int j = 1; j < MAKS; j++)
	{
		cout<<data[j]<<endl;
		if (data[j] > maks)
			maks = data[j];
	}
	cout<<"Data terbesar : "<< maks << endl;
	return 0;
}
