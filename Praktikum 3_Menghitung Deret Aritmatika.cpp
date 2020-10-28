/*Praktikum 3 Menghitung Deret*/
/*Muniroh 20051397017*/

#include <iostream>
using namespace std;

int main() {
	int i, suku, baris, deret;
	i = 1;
	baris = 3;
	deret = 0;
	cout<<endl;
	
	cout<<"====================== Program Menghitung Deret ======================"<<endl;
	cout<<endl;
	cout<<"Masukkan Banyak Suku : ";cin>>suku;
	cout<<endl;
	cout<<'3';
	
	while(i <= suku){
	baris += 4;
	deret+=baris;
	cout<<" + "<<baris;i++;

}
	cout<<" = "<<deret;
	cout<<endl;
	cout<<endl;
	cout<<"================================================================="<<endl;
	cout<<"			Happy Learning "<<endl;
	cout<<"================================================================="<<endl;
	cout<<endl;


return 0;
} 


