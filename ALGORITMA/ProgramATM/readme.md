
#Program ini dibuat hanya untuk mempelajari Bahasa Pemograman C++ dengan membuat Sebuah Program Sederhana yaitu Program Simulator ATM

#include <iostream> 
using namespace std;
int main(){
	int ID,no_ID,pin,nominal,nominal2,TF,DB_ID,DB_ID2,DB_pin,DB_pin2,pilih,pilih2,pilih3,pilih4,pilih5;
	string Nama_1,Nama_2;
	int saldo,saldo2;
	Nama_1 = "Rizki Alam Ramdhani";
	DB_ID = 1254212481;
	DB_pin = 221155;
	saldo = 2000000;
	Nama_2 = "Gaming Ganteng Coy";
	DB_ID2 = 1254212471;
	DB_pin2 = 331122;
	saldo2 = 3000000;
	Logout:
	cout << "##########################################" << '\n';
	cout << "#	Selamat Datang			 #" << '\n';
	cout << "#	Nasabah yang terhormat		 #" << '\n';
	cout << "#	Di Program ATM SIMULATOR	 #" << '\n';
	cout << "#	Create by Rizki Alam R		 #" << '\n';
	cout << "#	Account DEMO			 #" << '\n';
	cout << "#	Nama : Rizki Alam Ramdhani	 #" << '\n';
	cout << "#	NO REK	: 1254212481		 #" << '\n';
	cout << "#	PIN	: 221155		 #" << '\n';	
	cout << "#	Account DEMO 2			 #" << '\n';
	cout << "#	Nama : Gaming Ganteng Coy	 #" << '\n';
	cout << "#	NO REK	: 1254212471		 #" << '\n';
	cout << "#	PIN	: 331122		 #" << '\n';	
	cout << "##########################################" << '\n';
	cout << "Masukan PIN Anda :" ; cin >> pin;
	if (pin == DB_pin){
		cout << "Success !!!" << '\n'; goto Menu;
		cout << "########################" << '\n';
	}
	else if(pin == DB_pin2){
		cout << "Success !!!" << '\n'; goto Menu;
		cout << "########################" << '\n';		
	}
	else{
	 cout << "############ Login Gagal ############" << '\n';
	 cout <<"ID Dan PIN yang anda Masukan Salah!!" << '\n';
	 goto exit;
	}
	Menu:
	cout << "############ MENU ############" << '\n';
	cout << "[1] Cek Saldo" << '\n';
	cout << "[2] Setor Tunai" << '\n';
	cout << "[3] Tarik Tunai" << '\n';
	cout << "[4] Transfer" << '\n';
	cout << "[5] Exit" << '\n';
	cout << "############ *** ############" << '\n';
	cout << "Masukan Pilihan :" ; cin >> pilih;
	switch(pilih) {
	case 1:
		balik0:
		cout << "Masukan PIN!!:";cin>>pin;
		if(pin == DB_pin){
			cout << "############# SALDO ##############" << '\n';
			cout << "Nama: " << Nama_1 << '\n';
			cout << "Saldo Anda Rp." << saldo  << '\n';
			cout << "##################################" << '\n';
			cout << '\n';
			cout << "Apakah Anda ingin Melanjutkan transaksi Tekan 1 / 0 :"; cin >> pilih2;
			if (pilih2 == 1){
			goto Menu;
			}
			else if(pilih2 == 0){
				goto exit;
				break;
			}
		}
		else if(pin == DB_pin2){
			cout << "############# SALDO ##############"<< '\n';
			cout << "Nama: " << Nama_2 << '\n';
			cout << "Saldo Anda  Rp." << saldo2 << '\n';
			cout << "##################################"<< '\n';
			cout << '\n';
			cout << "Apakah Anda ingin Melanjutkan transaksi Tekan 1 / 0 :"; cin >> pilih2;
			if (pilih2 == 1){
			goto Menu;
			}
			else if(pilih2 == 0){
				goto exit;
			}
		}
		else{
			cout << "PIN SALAH" << '\n';
			goto balik0;
		}
	case 2:
		balik1:
		cout << "Setor Tunai" << '\n';
		cout << "Masukan Jumlah Nominal :"; cin >> nominal;
		masukan_pin_kembali:
		cout << "Masukan Pin 		:"; cin >> pin ;
		cout << "Apakah anda sudah yakin tekan 1 (yes) / 0 (no):";cin >> pilih2;
		if(pin == DB_pin){
			if(pilih2 == 1){
				cout << "############ RINCIAN SETOR ############" << '\n';
				cout << "	Setor berhasil		 "<< '\n';
				cout << "	Nama		     :" << Nama_1 << '\n';
				cout << "	Nominal yang disetor :Rp."<< nominal << '\n';
				saldo += nominal;
				cout << "	Saldo	             :Rp."<< saldo << '\n';
				cout << "############################################" << '\n';	
				balik2:
				cout << "Apakah Anda ingin Melanjutkan transaksi Tekan 1 / 0 :"; cin >> pilih3;
				if(pilih3 == 1){
					goto Menu;
				}
				else if (pilih3 == 0){
					goto exit;
				}
				else{
					cout << "Input Tidak Ada:" << '\n';
					goto balik2;
				}
				break;
			}
			else if(pilih2 == 0){
				goto balik1;
			}
		}
		else if(pin == DB_pin2){
			if(pilih4 == 1){
				cout << "############ RINCIAN SETOR ############" << '\n';
				cout << "	Setor berhasil		 "<< '\n';
				cout << "	Nama		     :"  << Nama_2 << '\n';
				cout << "	Nominal yang disetor :Rp."<< nominal << '\n';
				saldo2 += nominal;
				cout << "	Saldo	             :Rp."<< saldo2 << '\n';
				cout << "############################################" << '\n';	
				balik3:
				cout << "Apakah Anda ingin Melanjutkan transaksi Tekan 1 / 0 :"; cin >> pilih3;
				if(pilih3 == 1){
					goto Menu;
				}
				else if (pilih3 == 0){
					cout << "Berhasil Keluar !!" << '\n';
					goto exit;
				}
				else{
					cout << "Input Tidak Ada:" << '\n';
					goto balik3;
				}
				break;
			}
			else if(pilih2 == 0){
				goto balik1;
			}
		}
		else{
			cout << "pin Salah!!!" << '\n';
			goto masukan_pin_kembali;
		}
	case 3:
		BALIK14:
		cout << "#################################################" << '\n';
		cout << "Tarik Tunai"  << '\n';
		cout << "Masukan Jumlah Nominal yang ingin di tarik :";cin >> nominal2;
		masukan_pin_kembali2:
		cout << "Masukan PIN :";cin >> pin ;
		cout << "#################################################" << '\n';
		if(pin == DB_pin){
			if(nominal2 > saldo){
			cout << "################################################################" << '\n';
				cout << "Saldo anda tidak Mencukupi!! Saldo Sekarang RP." << saldo << '\n';
			cout << "################################################################" << '\n';	
				goto BALIK_2;
			}
			else{
				goto LANJUT_21;
			}
			LANJUT_21:
				cout << "Apakah anda sudah yakin tekan 1 / 0 :";cin >> pilih2;
				if(pilih2 == 1){
					cout << "############ RINCIAN TARIK TUNAI ##############" << '\n';
					cout << "Tarik Tunai" << '\n';
					cout << "Nama				  : " << Nama_1 << '\n'; 
					cout << "Nominal yang ditarik : Rp." << nominal2 << '\n';
					saldo -= nominal2;
					cout << "Sisa Saldo           : Rp." << saldo << '\n';
					cout << "###############################################" << '\n';
					cout << "Apakah Anda ingin Melanjutkan transaksi Tekan 1 / 0 :"; cin >> pilih3;
					if(pilih3 == 1){
						goto Menu;
					}
					else if (pilih3 == 0){
						goto exit;
					}
					break;
				}
				else if(pilih2 == 0){
					goto BALIK14;
				}
		}
		else if(pin == DB_pin2){
			if(nominal2 > saldo2){
			cout << "################################################################" << '\n';
				cout << "Saldo anda tidak Mencukupi!! Saldo Sekarang RP." << saldo2 << '\n';
			cout << "################################################################" << '\n';	
				goto BALIK_2;
			}
			else{
				goto LANJUT_22;
			}
				LANJUT_22:
				cout << "Apakah anda sudah yakin tekan 1 / 0:";cin >> pilih2;
				if(pilih2 == 1){
					cout << "############ RINCIAN TARIK TUNAI ##############" << '\n';
					cout << "Tarik Tunai" << '\n';
					cout << "Nama				  : " << Nama_2 << '\n';
					cout << "Nominal yang ditarik : Rp." << nominal2 << '\n';
					saldo2 -= nominal2;
					cout << "Sisa Saldo           : Rp." << saldo2 << '\n';
					cout << "###############################################" << '\n';
					cout << "Apakah Anda ingin Melanjutkan transaksi Tekan 1 / 0 :"; cin >> pilih3;
					if(pilih3 == 1){
						goto Menu;
					}
					else if (pilih3 == 0){
						goto exit;
					}
					break;
				}
				else if(pilih2 == 0){
					goto BALIK14;
				}
		}
		else{
			cout << "PIN SALAH !!!" << '\n';
			goto masukan_pin_kembali2;
		}
	case 4:
		BALIK_1:
		cout << "###################################" << '\n';
		cout << "Transfer"<< '\n';
		cout << "Masukan Nomer REK Tujuan:"; cin >> no_ID;
		if(no_ID == DB_ID || no_ID == DB_ID2){
			goto LANJUT_1;
		}
		else{
			cout << "Nomer Rekening Tidak Ada!!" << '\n';
			goto BALIK_1;
			break;
		}
		LANJUT_1:
		BALIK_2:
		cout << "Masukan Jumlah Nominal :"; cin >> nominal ;
		BALIK_3:
		cout << "Masukan Pin 	:"; cin >> pin  ;
		cout << "###################################" << '\n';
		if(pin == DB_pin){
			if(nominal > saldo){
			cout << "################################################################" << '\n';
				cout << "Saldo anda tidak Mencukupi!! Saldo Sekarang RP." << saldo << '\n';
			cout << "################################################################" << '\n';	
				goto BALIK_2;
			}
			else{
				goto LANJUT_2;
			}
				LANJUT_2:
				cout << "Apakah anda sudah yakin tekan 1 / 0 :";cin >> pilih4;
				if(pilih4 == 1){
					cout << "############ RINCIAN TRANSFER ##############" << '\n';
					cout << "Transfer" << '\n';
					cout << "Nama		     : " << Nama_1 << '\n'; 
					cout << "No Rekening	     : "  << no_ID << '\n';
					cout << "Nominal yang ditarik : Rp." << nominal << '\n';
					saldo -= nominal;
					saldo2 += nominal;
					cout << "Sisa Saldo           : Rp." << saldo << '\n';
					cout << "###############################################" << '\n';
					cout << "Apakah Anda ingin Melanjutkan transaksi Tekan 1 / 0 :"; cin >> pilih3;
						if(pilih3 == 1){
							goto Menu;
							}
						else if (pilih3 == 0){
							goto exit;
							break;
							}
				}
				else if(pilih4 == 0){
					goto BALIK_1;
						}
		}
		else if(pin == DB_pin2){
			if(nominal > saldo2){
				cout << "##########################################" << '\n';	
				cout << "Saldo anda tidak Mencukupi!! Saldo Sekarang RP." << saldo2 << '\n';
				cout << "##########################################" << '\n';
				goto BALIK_2;
			}
			else{
				goto LANJUT_3;
			}
				LANJUT_3:
				cout << "Apakah anda sudah yakin tekan 1 / 0 :";cin >> pilih5;
				if(pilih5 == 1){
					cout << "############ RINCIAN TRANSFER ##############" << '\n';
					cout << "Transfer" << '\n';
					cout << "Nama		     : " << Nama_2 << '\n'; 
					cout << "No Rekening	     : "  << no_ID << '\n';
					cout << "Nominal yang ditarik : Rp." << nominal << '\n';
					saldo2 -= nominal;
					cout << "Sisa Saldo           : Rp." << saldo2  << '\n';
					saldo += nominal;
					cout << "###############################################" << '\n';
					cout << "Apakah Anda ingin Melanjutkan transaksi Tekan 1 / 0 :";cin >> pilih3;
						if(pilih3 == 1){
						goto Menu;
							}
						else if (pilih3 == 0){
							goto exit;
							}
						break;
				}
				else if(pilih5 == 0){
					goto BALIK_1;
					break;
				}
		}
		else{
			cout << "PIN SALAH !!!" << '\n';
			goto BALIK_3;
		}
	case 5:
		exit:
		goto Logout;
	}
}
