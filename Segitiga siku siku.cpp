/* Program Menghitung Segitiga Siku-siku */
/* Muniroh (20051397017) */

#include <iostream>
#include <math.h>

using namespace std;
int main(void){
	char nama[15],ket[30];
	int a,b,c,d,L,menu;
	float hasil;
	cout << "--------------------------------------------------------------- \n";
	cout << "~~~~~~~~~~~~~~~~~~  Segitiga Siku-Siku  ~~~~~~~~~~~~~~~~~~~~~~~ \n";
	cout << "_______________________________________________________________ \n";
	cout << endl;
	cout << "	Masukkan Panjang Alas : ";
	cin >>a;
	cout << "	Masukkan Panjang tinggi : ";
	cin >>b;
	cout << endl;
	cout << "	Menu : \n";
	cout << "	1. Hitung Panjang Sisi Miring \n";
	cout << "	2. Hitung Luas \n";
	cout << "	3. Hitung Keliling \n";
	cout << "	4. Keluar Program \n";
	cout << endl;
	cout << "=============================================================== \n";
	cout << endl;
	cout <<"	Pilih Menu [1/2/3/4] : ";
	cin >> menu;
	cout << endl;
c=pow(a,2)+pow(b,2);
d=sqrt(c);
	
	switch (menu)
{
	case 1 : 
	double hasil;
	cout <<	"	Rumus Sisi Miring = akar dari a kuadrat + b kuadrat \n";
	hasil = sqrt (c);
	cout << "	Hasil : " <<hasil<<endl;
	break;

	case 2 : 
	cout << "	Rumus Luas Segitiga = 1/2 x alas x tinggi \n";
	hasil = a*b/2;
	cout << "	Hasil : " <<hasil<<endl;
	break;

	case 3 : 
	cout << "	Rumus Keliling Segitiga = alas + tinggi + sisi miring \n";
	hasil = a+b+d;
	cout << "	Hasil : " <<hasil<<endl;
	break;
	
	case 4 :
	cout << "	XXO-> PRESS ANY KEY TO CLOSE <-OXX \n";	
	exit (0);
}
	cout << endl;
	cout << "=============================================================== \n";
	
	return 0;
}

