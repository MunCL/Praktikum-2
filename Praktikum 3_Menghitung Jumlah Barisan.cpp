/*Praktikum 3 Menghitung Jumlah Barisan*/
/*Muniroh 20051397017*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int i, suku, baris, deret,n;
	i = 1;
	baris = 0;
	deret = 0;
	cout<<endl;

	cout<<"====================== Menghitung Jumlah Barisan ======================"<<endl;
	cout<<endl;
	cout<<"Masukkan Banyak Suku : ";cin>>suku;
	cout<<endl;
	
	while(i <= suku){
	n = pow(i,3);
	cout<<n<<" "<<endl;
	baris += n,i++;
}
	cout<<"Jumlah = "<<baris;
	cout<<endl;
	cout<<endl;
	cout<<"================================================================="<<endl;
	cout<<"			Happy Learning "<<endl;
	cout<<"================================================================="<<endl;
	cout<<endl;


return 0;
} 


