#include<iostream>
#include<string.h>
using namespace std;

int main(){

 char l[100];
 cout<<"Masukan Isi Linked List :"; cin.getline (l,sizeof (l));
 
 int x = strlen(l);
     for(int i=x-1;i>=-1;i--){
          if(l[i]==' ' || i<0){
               int j = i;
                while(j+1<=x){
                     cout<<l[j+1];
                     j++;
                }
           x = x-(x-i);
          } 
     }
}

