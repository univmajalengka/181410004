#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int data_lulus[3][4];   //Array berdimensi dua
	int tahun, jurusan;
	
	//clrscr();				//Hapus layar
	
	// Memberikan data ke elemen array data_lulus
	
	data_lulus[0][0] = 35;  //data TI - 1992
	data_lulus[0][1] = 45;  //data TI - 1993
	data_lulus[0][2] = 90;  //data TI - 1994
	data_lulus[0][3] = 120;  //data TI - 1995
	data_lulus[1][0] = 100;  //data MI - 1992
	data_lulus[1][1] = 110;  //data MI - 1993
	data_lulus[1][2] = 70;   //data MI - 1994
	data_lulus[1][3] = 101;  //data MI - 1995
	data_lulus[2][0] = 10;   //data TK - 1992
	data_lulus[2][1] = 15;   //data TK - 1993
	data_lulus[2][2] = 20;   //data TK - 1993
	data_lulus[2][3] = 17;   //data TK - 1993
	
	//proses untuk memperoleh informasi kelulusan
	
	while (1)
	{
		cout<<"Jurusan (0 = TI, 1 = MI, 2 = TK): ";
		cin>>jurusan;
		
		if ((jurusan == 0) || (jurusan == 1) || (jurusan == 2))
		  break;            //keluar dari while
	}
	while (1)
	{
		cout << "Tahun (192 - 1995) : ";
		cin >> tahun;
		
		if ( (tahun >= 1992) && (tahun <= 1995) )
		{
			tahun -= 1992;    //konversi ke 0, 1, 2 atau 3
			break;            //keluar dari while
		}
	}
	cout << "Jumlah yang lulus = "
	     << data_lulus [jurusan] [tahun] << endl;
}
