#include <iostream>
#include <iomanip>
using namespace std;

app1()
{
	int a,b,r;

	cout<<"�п�J��1�Ӿ�ơG";
	cin>>a;
	cout<<"�п�J��2�Ӿ�ơG";
	cin>>b;
	r=a%b;
	while (r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	cout<<"�̤j���]�ƬO"<<b<<endl; 
	system("Pause");
}
