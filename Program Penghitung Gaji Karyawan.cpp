#include<iostream>
using namespace std;
int main()
{
 	const int gajiPokok= 5000;
	char namaKryawn[20];
	int gaji, jamKerja;
	float totalgaji;
		cout<<"========================================="<<endl<<endl;
		cout<<"     Program Menghitung Gaji Karyawan"<<endl<<endl;
		cout<<"========================================="<<endl<<endl;
		cout<<" Gaji Pokok Per-Jam	:Rp. "<<gajiPokok<<endl;
		cout<<"========================================="<<endl<<endl;
		cout<<" Nama Karyawan		: ";cin>>namaKryawn;
		cout<<" Jumlah Jam Kerja	: ";cin>>jamKerja;
		cout<<"========================================="<<endl<<endl;
		gaji=gajiPokok*jamKerja;

		cout<<" Nama Karyawan	: "<<namaKryawn<<endl;
		cout<<" Jam Kerja		: "<<jamKerja<<" Jam"<<endl;
		totalgaji=gajiPokok*jamKerja;
		cout<<" Total Gaji		:Rp. "<<totalgaji<<endl;
		cout<<endl;
}
