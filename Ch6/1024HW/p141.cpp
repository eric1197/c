#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

app()
{
	float a,b,c,d,x1,x2;
	
	cout<<"請依序輸入一元二次方程式的係數(a b c)：";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		cout<<"方程式有解：x="<<x1<<"或x="<<x2<<endl; 
	}
	else if(d==0){
		x1=(-b+sqrt(d))/(2*a);
		cout<<"方程式有解：x="<<x1<<"(重根)"<<endl;
	}
	else
		cout<<"無解"<<endl; 
system("pause");
}
