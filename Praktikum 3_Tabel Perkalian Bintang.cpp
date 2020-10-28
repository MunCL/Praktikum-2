/*Program Tabel Perkalian*/
/*Muniroh 20051397017*/

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

main(){

	int i,j;
	cout<<"===============>> Tabel Perkalian Bintang \n";
	cout<<endl;
 

	for (i=1;i<=10;i++){ 	
	cout<<setw(5)<<"*";
	
	for (j=1;j<=10;j++)
	cout<<setw(5)<<"*";
	cout<<endl;

}

	getch();

}
