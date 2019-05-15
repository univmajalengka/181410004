// array of structures

#include <iostream>

#include <string>

#include <sstream>

using namespace std;

struct mahasiswa {

string Nama;
string alamat;
string ttl;
string nohp;

} nab [4];

void printdata (mahasiswa data);

int main ()

{


int n;

for (n=0; n<4; n++) {

cout << "Masukan Nama : ";

getline (cin,nab[n].Nama);

cout << "Tempat Lahir : ";

getline (cin,nab[n].alamat);

cout << "Tanggal Lahir : ";

getline (cin,nab[n].ttl);


cout << "No HP : ";

getline (cin,nab[n].nohp);


cout << "\n";
cout << "############# Data Sudah Di Masukan ############# \n";

}

cout << "\nData - Data Mahasiswa Yang Sudah Anda Masukan:\n";

for (n=0; n<4; n++)

printdata (nab[n]);

return 0;

}

void printdata (mahasiswa data)

{
cout << "######################################################################\n";
cout << "\n";
cout <<  data.Nama <<"\t";
cout <<  data.alamat << "\t";
cout <<  data.ttl << "\t";
cout <<  data.nohp << "\n";
cout << "\n";

}
