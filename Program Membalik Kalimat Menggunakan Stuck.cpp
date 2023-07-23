#include <iostream.h>

using namespace std;

struct Balik{
    char i[100];
    int j;
} B;

void push(char x){
    if(B.j==100){
        cout<<"Penuh!";
    }
    else{
        B.j=B.j+1;
        B.i[B.j]=x;
    }
}
char pop(){
    char hasil;
    if(B.i==0){
    cout<<"Tumpukan sudah kosong";
    hasil=' ';
    }
    else{
    hasil=B.i[B.j];
      B.j=B.j-1;
    }
    return hasil;
}

int main()
{
    int k;
    char l[100];
    system("CLS");
    B.j=0;

    cout<<"Masukan kalimat:"; cin.getline(l,sizeof(l));

    system("CLS");
    cout<<"Kalimat asli:"<<l;

    for(k=0; k<strlen(l); k++)
       {
           push(l[k]);
       }
    cout<<"\nKalimat Setelah di Balik : ";

    for(k=0; k<strlen(l); k++)
    {
        cout<<pop();
    }
    cout<<endl;

    return 0;
}
