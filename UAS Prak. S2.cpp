#include <iostream>
using namespace std;

int main (){
	float total_pembelian, diskon, total_belanja, uang_konsumen;
	cout<<"Masukkan Total Pembelian ";
	cin>>total_pembelian;

	if (total_pembelian >= 500000)
	{
		diskon = 0.1*total_pembelian;
	}
	else {
		diskon = 0;
	}
	
	total_belanja = total_pembelian - diskon;
	cout<<"Total Diskon = "<<diskon;
	cout<<endl<<"Total Belanja = "<<total_belanja;
	cout<<endl<<"Masukkan Uang Konsumen ";
	cin>>uang_konsumen;
	uang_konsumen = uang_konsumen - total_belanja;
	cout<<"Uang Kembalian = "<<uang_konsumen;
	if (total_belanja > uang_konsumen)
	{
		cout<<"Maaf, Uang Anda Tidak Cukup!";
	}
}
