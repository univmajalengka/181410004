#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	// Pendefinisian array berdimensi tiga
	// dan pemberia nilai awal
	
	int huruf[2][8][8] =
	{
		{
			{ 0, 1, 1, 1, 1, 1, 0, 0 }, 
			{ 0, 1, 0, 0, 0, 1, 0, 0 },
			{ 0, 1, 0, 0, 0, 1, 0, 0 },
			{ 1, 1, 1, 1, 1, 1, 1, 0 },
			{ 1, 1, 0, 0, 0, 0, 1, 0 },
			{ 1, 1, 1, 0, 0, 0, 1, 0 },
			{ 1, 1, 0, 0, 0, 0, 1, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0 },
		},{
			{ 1, 1, 1, 1, 1, 1, 0, 0 },
			{ 1, 0, 0, 0, 0, 1, 0, 0 },
			{ 1, 0, 0, 0, 0, 1, 0, 0 },
			{ 1, 1, 1, 1, 1, 1, 1, 0 },
			{ 1, 1, 0, 0, 0, 0, 1, 0 },
			{ 1, 1, 0, 0, 0, 0, 1, 0 },
			{ 1, 1, 1, 1, 1, 1, 1, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0 },
		}
	};
	int i, j, k;
	//clrscr ();		//hapus layar
	for (i= 0; i < 2 ; i++)
	{
		for (j = 0; j < 8; j++)
		{
			for (k = 0; k< 8; k++)
			if ( huruf [i][j][k] == 1)
			cout<< '\xBD';
			else
			cout<< '\x20';		// spasi
			cout <<endl;		// pindah baris
		}
		cout<< endl;			//baris kosong
	}
}
