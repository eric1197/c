#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

app()
{
	float a,b,c,d,x1,x2;
	
	cout<<"�Ш̧ǿ�J�@���G����{�����Y��(a b c)�G";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		cout<<"��{�����ѡGx="<<x1<<"��x="<<x2<<endl; 
	}
	else if(d==0){
		x1=(-b+sqrt(d))/(2*a);
		cout<<"��{�����ѡGx="<<x1<<"(����)"<<endl;
	}
	else
		cout<<"�L��"<<endl; 
system("pause");
}
