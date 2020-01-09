#include <iostream>
#include <iomanip>
using namespace std;

app2()
{
	int a,b,c;
	
	cout<<"請輸入三角形的三邊長(長邊到短邊，以空格區隔)";
	cin>>c>>b>>a;
	cout<<"三角形的種類為：";
	if(a+b>c){
		if(c*c==a*a+b*b)
			cout<<"直角三角形"<<endl; 
		else if(c*c<a*a+b*b)
			cout<<"銳角三角形"<<endl;
		else
			cout<<"鈍角三角形"<<endl; 
	}
	else
		cout<<"輸入的三邊長無法構成三角形"<<endl;
system("pause");
}
