#include <iostream.h>
#include <string>

using namespace std;

typedef struct film
{
	string MovieID;
    string MovieTitle;
	string Director;
	string Year;
	string IMDBRate;
}
film;

using namespace std;

main()
{
	cout<<"Menampilkan Data-Data Film";
	cout<<endl;
	cout<<endl;
	
	film a[6];
	int i,j,x=1,y=1;
	for(i=0;i<6;i++)
	{
		cout<<"Masukkan film ke-"<<x<<"!"<<endl;x=x+1;
		cout<<"Movie ID: "; getline(cin,a[i].MovieID);
		cout<<"Movie Title: "; getline(cin,a[i].MovieTitle);
		cout<<"Director: "; getline(cin,a[i].Director);
		cout<<"Year: "; getline(cin,a[i].Year);
		cout<<"IMDB Rate: "; getline(cin,a[i].IMDBRate);
		cout<<endl;
	}
	
	for(j=0;j<6;j++)
	{
		cout<<"Film "<<y<<":"<<endl; y=y+1;
		cout<<"Movie ID: "<<a[j].MovieID<<endl;
		cout<<"Movie Title: "<<a[j].MovieTitle<<endl;
		cout<<"Director: "<<a[j].Director<<endl;
		cout<<"Year: "<<a[j].Year<<endl;
		cout<<"IMDB Rate: "<<a[j].IMDBRate<<endl;
		cout<<endl;
	}
}

