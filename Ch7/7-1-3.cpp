#include <iostream>
#include <iomanip>
using namespace std;


void app3()
{
	char isbn[14];
	int j,m,n,s;
	char check;
	j=10;
	s=0;
	cout<<"請輸入ISBN碼：";
	cin>>isbn;
	for(int i=0;i<12;i++)
		if(isbn[i]>='0'&& isbn[i]<='9')
			s=s+(isbn[i]-'0')*(j--);
	m=s%11;
	n=11-m;
	if(n==11) check='0';
	else if(n==10) check='X';
	else check='0'+n;
	if(check==isbn[12]) cout<<"書碼正確"<<endl;
	else cout<<"書碼錯誤"<<endl;
	system("Pause");
}
