#include <iostream>
using namespace std;

int p, l, NIM; 
string nama, tmptLahir;

float KelilingLingkaran(float r){
	
	float hasilLingkaran = 2 * 3.14 * r;
	
	return hasilLingkaran;
	
}

void LuasPersegiPanjang(){
	
	cout<<"Panjang : ";
	cin>>p;
	cout<<"Lebar : ";
	cin>>l;
	
	int hasilPersegiPanjang = p * l;
	cout<<"Luasnya : "<<hasilPersegiPanjang<<endl;
	
}


void data(){
	
	cout<<"Masukkan Nama : ";
	cin>>nama;
	cout<<"Masukkan NIM : ";
	cin>>NIM;
	cout<<"Masukkan Tempat Lahir : ";
	cin>>tmptLahir;
	
	cout<<"\nNama : "<<nama<<endl;
	cout<<"NIM : "<<NIM<<endl;
	cout<<"Tempat Lahir : "<<tmptLahir<<endl;
	
}


int main(){
	

	cout<<"Keliling Lingkaran : "<<KelilingLingkaran(5)<<endl; //mamanggil fungsi dan mengisi nilai dari jari-jari
	
	
	cout<<"\nPersegi Panjang"<<endl;
	LuasPersegiPanjang(); //memanggil fungsi 
	
	
	cout<<"\nData Diri"<<endl;
	data(); //memanggil fungsi
	
	
}
