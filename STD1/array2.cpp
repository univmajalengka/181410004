#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct recordMahasiwa
{
   char strNama[20];
   char strNim[15];
   int tugas1, tugas2, ujian;
   float total;
   char grade;
}TipeMhs;


int main(void)
{
 TipeMhs mhs1;
    printf("Nama Mahasiswa :");
 gets(mhs1.strNama);
    printf("NIM :");
 gets(mhs1.strNim);
    printf("Tugas 1 :");
 scanf("%d",&mhs1.tugas1);
 printf("Tugas 2 :");
 scanf("%d",&mhs1.tugas2);
    printf("Ujian :");
 scanf("%d",&mhs1.ujian);
    mhs1.total = (float)mhs1.tugas1*0.2 + (float)mhs1.tugas2*0.3 + (float)mhs1.ujian * 0.5;
    if (mhs1.total >= 80.0 && mhs1.total <=100.0)
       mhs1.grade = 'A';
    else if (mhs1.total >= 70.0 && mhs1.total <80.0)
       mhs1.grade = 'B';
    else if (mhs1.total >= 60.0 && mhs1.total <70.0)
       mhs1.grade = 'C';
    else if (mhs1.total >= 50.0 && mhs1.total < 60.0)
       mhs1.grade = 'D';
    else
       mhs1.grade = 'E';  
  
    printf("\n\n\n\n\n");
    printf("Data Mahasiswa\n");
    printf("Nama Mahasiswa :%s\n", mhs1.strNama);
    printf("Nim  :%s\n",mhs1.strNim);
    printf("Tugas 1: %d\n", mhs1.tugas1);
    printf("Tugas 2: %d\n", mhs1.tugas2);
    printf("Total  : %.2f\n", mhs1.total);
    printf("Grade  : %c\n", mhs1.grade);
  
    getch();
    return EXIT_SUCCESS;
}  