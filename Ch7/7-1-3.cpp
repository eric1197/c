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
	cout<<"�п�JISBN�X�G";
	cin>>isbn;
	for(int i=0;i<12;i++)
		if(isbn[i]>='0'&& isbn[i]<='9')
			s=s+(isbn[i]-'0')*(j--);
	m=s%11;
	n=11-m;
	if(n==11) check='0';
	else if(n==10) check='X';
	else check='0'+n;
	if(check==isbn[12]) cout<<"�ѽX���T"<<endl;
	else cout<<"�ѽX���~"<<endl;
	system("Pause");
}
