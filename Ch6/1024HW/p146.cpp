#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

app2()
{
	int d,r,k=0,p=0;
	
	cout<<"請輸入一整數值(1000以內)：";
	cin>>d;
	while(d!=0){
		r=d%2;
		d=d/2;
		k=k+r*pow(10,p++);
	}
	cout<<"二進位輸出結果為："<<k<<endl;
system("pause");
}
