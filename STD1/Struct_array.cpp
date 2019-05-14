#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void header(){
	printf("Struk Nasabah\n");
	printf("BY RIZKI ALAM R\n");
}

typedef struct recordNasabah
{
   char strNamalengkap[50];
   char strAlamatRumah[100];
   int kode;
   int status;
   char nomerhp [13];
}nab;
int main(void)
{
 nab sync;
 header();
    printf("Nama Nasabah:");
 gets(sync.strNamalengkap);
    printf("Alamat Rumah :");
 gets(sync.strAlamatRumah);
    printf("Kode :");
 scanf("%d",&sync.kode);
 printf("Status :");
 scanf("%d",&sync.status);
    printf("No Hp :");
 scanf("%s",&sync.nomerhp);
 
    printf("\n\n\n\n\n");
    printf("Data Nasabah\n");
    printf("Nama Nasabah :%s\n", sync.strNamalengkap);
    printf("Alamat Rumah  :%s\n",sync.strAlamatRumah);
    printf("Kode : %d\n", sync.kode);
    printf("Status:%d \n", sync.status);
    printf("No Hp : %s\n", sync.nomerhp);
  
    getch();
    return EXIT_SUCCESS;
}
