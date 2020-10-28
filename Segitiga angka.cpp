/* Segitiga Angka */
/* Muniroh 20051397017 */

#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int angka,n,i,j;

    cout<<"Masukan segitiga angka : ";
    cin>>n;
	cout<<"\n";
	for (i=1; i<=n; i++)
{
	for (j=1; j<=i; j++)
{
	cout<<j<<" ";
}
	cout<<" \n";
}
	for (i=n-1; i>=1;i--)
{
	for (j=1;j<=i;j++)
{
	cout<<j<<" ";
}
	cout<<" \n";
}
	getch();
}
