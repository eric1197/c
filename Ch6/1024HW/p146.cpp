#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

app2()
{
	int d,r,k=0,p=0;
	
	cout<<"�п�J�@��ƭ�(1000�H��)�G";
	cin>>d;
	while(d!=0){
		r=d%2;
		d=d/2;
		k=k+r*pow(10,p++);
	}
	cout<<"�G�i���X���G���G"<<k<<endl;
system("pause");
}
