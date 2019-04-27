#include<iostream>
#include<conio.h>

using namespace std;

void views(int jam, int menit, int detik){
 cout << "Jam :"<< jam << "\n";
 cout << "Menit :"<< menit << "\n";
 cout << "Detik :" <<detik << "\n";
}

int total(int j,int m, int d){
 int total,tj,tm,td,sisa;
 tj=j * 60;
 tm= m * 60;
 td= d ;
 total = tj + tm + td ;
 return total;
}

int main(){
 int j,m,d;
 int harga;
 cout << "Selamat Datang Di program biling Sederhana \n";
 cout << "Masukan Jam :" ;cin >> j ;
 cout << "Masukan Menit :";cin >> m ;
 cout << "Masukan Detik :"; cin >> d;
 harga = 50;
 cout << "\n";
 cout << "\n";
 cout << "Penggunaan biling Computer \n";
 views(j,m,d);
 cout << "total harga harus di bayar :" <<harga*total(j,m,d);
    return 0;
}