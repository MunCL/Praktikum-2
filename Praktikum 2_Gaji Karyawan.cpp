/* Program Menghitung Gaji Karyawan Mingguan */
/* Muniroh (20051397017) */

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(void){
	char nama[15],ket[30],golongan;
	int gaji,jam,lebih,bonus,tot_gaji,Tot_gaji,Tgaji;
	cout << endl;
	cout << "====================================================== \n";
	cout << "~~~~~~~~~~~~~~~~~~~~ Gaji Karyawan ~~~~~~~~~~~~~~~~~~~ \n";
	cout << "********************* PT. MAKMUR ********************* \n";
	cout << "------------------------------------------------------ \n";
	cout << endl;
	cout << "	Masukkan Nama Karyawan : ";
	cin >>nama;
	cout << "	Masukkan Golongan [A/B/C/D] : ";
	golongan=getche();
	switch (golongan){
	case 'A' :{
	strcpy(ket,"Rp.5000");
	break;
}
	case 'B' :{
	strcpy(ket,"Rp.7000");
	break;
}
	case 'C' :{
	strcpy(ket,"Rp.8000");
	break;
}
	case 'D' :{
	strcpy(ket,"Rp.10000");
	break;
}
}
	cout << endl;
	cout << endl;
	cout << "------------------------------------------------------ \n";
	cout << endl;
	cout << "	Nama Karyawan : " << nama <<endl;
	cout << "	Kode golongan : " << golongan <<endl;
	cout << "	Gaji per Jam : " << ket << endl;
	cout << endl;
	cout << "====================================================== \n";
	cout << endl;
	cout << "	Konfirmasi Gaji per Jam : Rp.";
	cin >> gaji;
	cout << "	Masukkan Jumlah Jam Kerja : ";
	cin >> jam;

	if(jam>=48){
	tot_gaji=48*gaji;
	cout << "	Jumlah Gaji : " <<tot_gaji<<endl;
}
	if(jam>=48){
	lebih = jam-48;
	cout << "	Jumlah Jam Lembur : " <<lebih<<endl;
}
	if(jam>=48){
	bonus = 4000*lebih;
	cout << "	Gaji Lembur : " <<bonus<<endl;
	cout << "______________________________________________________ \n";
}	
	cout << endl;
	if(jam>=48){
	Tgaji=bonus+tot_gaji;
	cout << "	Total Gaji : " <<Tgaji<<endl;
	cout << endl;
	cout << "====================================================== \n";
	
	exit(0);
}
	if(jam<=48){
	Tot_gaji=jam*gaji;
	cout << "	Jumlah Gaji : " <<Tot_gaji<<endl;
}
	if(jam<=48){
	cout << "	Jumlah Jam Lembur : 0" <<endl;
}
	if(jam<=48){
	cout << "	Gaji Lembur : 0 "<<endl;
	cout << "______________________________________________________ \n";
}
	cout << endl;
	if(jam<=48){
	cout << "	Total Gaji = " <<Tot_gaji<<endl;
	cout << endl;
	cout << "====================================================== \n";
}
	return 0;
}
