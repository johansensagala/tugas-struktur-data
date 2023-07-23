#include <iostream>
using namespace std;

struct mahasiswa
{
	int nim;
	char nama[40];
	float ipk;
};

int main()
{	
	struct mahasiswa m1[8];
	
	for(int i=0;i<8;i++){
	   cout<<"Masukkan data mahasiswa ke-"<<i+1<<endl;
	   cout<<"NIM mahasiswa : ";
	   cin>>m1[i].nim;
	   cout<<"Nama mahasiswa : ";
	   cin>>m1[i].nama;
	   cout<<"IPK mahasiswa : ";
	   cin>>m1[i].ipk;
	   cout<<endl;		
	}
	
	cout<<endl;
    cout<<"Data Mahasiswa yang Telah Diinput"<<endl;
    cout<<endl;
    for(int i=0;i<8;i++){
   	   cout<<"Data mahasiswa "<<i+1<<":"<<endl;
	   cout<<"NIM:"<<m1[i].nim<<endl;
   	   cout<<"Nama:"<<m1[i].nama<<endl;
	   cout<<"IPK:"<<m1[i].ipk<<endl;
	   cout<<endl;
	}
	
	int nim;
	cout<<endl;
	cout<<"Input NIM untuk mencari data:"; cin>>nim;
	for(int i=0;i<8;i++){
		if(nim==m1[i].nim){
			cout<<"Data ditemukan, data lengkap mahasiswa:"<<endl;
			cout<<"NIM:"<<m1[i].nim<<endl;
   	        cout<<"Nama:"<<m1[i].nama<<endl;
	        cout<<"IPK:"<<m1[i].ipk<<endl;
		}
	}
	
}
