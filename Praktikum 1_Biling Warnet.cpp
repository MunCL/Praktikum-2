/* Program Billing Warnet */
/* Muniroh (20051397017) */

#include <iostream>
using namespace std;
int main (void) {
	char nama[40];
	long int totdet,sisa,totjam,totmenit,totdetik,jam,menit,detik,bayar,besar,J1,M1,D1,M2,D2,J2,tarif,tarifM,tarifD,lama;
	
	cout <<"==========================================================" <<endl;
	cout <<"		Program Billing Warnet" <<endl;
	cout <<"==========================================================" <<endl;
	cout <<"		Selamat Datang di MunCL Sell" << endl;
	cout <<"==========================================================" <<endl;
	
	cout <<"		Tarif Rp 5000  per JAM" <<endl;
	cout <<"**********************************************************" <<endl;

		cout <<"	Masukkan Nama User : "; 
		cin >> nama;
	cout <<"-----------------------Waktu Mulai------------------------" <<endl;
		cout <<"	Masukkan Jam : ";
		cin >> J1;
		cout <<"	Masukkan Menit : ";
		cin >> M1;
		cout <<"	Masukkan Detik : ";
		cin >> D1;
	cout <<"--------------------------Selesai-------------------------" <<endl;
		cout <<"	Masukkan Jam : ";
		cin >> J2;
		cout <<"	Masukkan Menit : ";
		cin >> M2;
		cout <<"	Masukkan Detik : ";
		cin >> D2;
	cout <<"==========================================================" <<endl;
	cout <<"		Pembayaran Warnet" <<endl;
	cout <<"==========================================================" <<endl;
	
	totjam=J2-J1;
	totmenit=M2-M1;
	totdetik=D2-D1;
		
		cout <<"Nama User : " << nama <<endl;
	
	jam=totjam;
	menit=totmenit;
	detik=totdetik;
	
		cout <<	"Lama Pemakaian : " <<endl;
		cout << jam << " jam"  <<endl;
		cout << menit << " menit"  <<endl;
		cout << detik << " detik"  <<endl;
		
	tarif=5000;
	tarifM=tarif/60;
	tarifD=tarifM/60;
	
	cout <<"***********************************************************" <<endl;
	
		cout <<"	Tarif Per Jam (Rp) : " << tarif << endl;
		cout <<"	Tarif Per Menit (Rp) : " << tarifM << endl;
		cout <<"	Tarif Per Detik (Rp) : " << tarifD << endl;
	
	bayar=(tarif*jam)+(tarifM*menit)+(tarifD*detik);

		cout <<"	Total Pembayaran (Rp): " << bayar << endl;
	
	cout <<"===========================================================" <<endl;
	cout <<"		Terimakasih Atas Kunjungan" <<endl;
	cout <<"===========================================================" <<endl;
	
 return 0;
}
