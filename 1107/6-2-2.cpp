#include <iostream>
#include <iomanip>
using namespace std;

app1()
{
	int a,b,r;

	cout<<"請輸入第1個整數：";
	cin>>a;
	cout<<"請輸入第2個整數：";
	cin>>b;
	r=a%b;
	while (r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	cout<<"最大公因數是"<<b<<endl; 
	system("Pause");
}
