#include <iostream>
#include <iomanip>
using namespace std;

app4()
{
		int w,h;
	cout<<"請依序輸入城牆的寬度與高度：";
	cin>>w>>h;
	cout<<" ";
	for(int i=1; i<=w; i++)
		cout<<i%10;
	cout<<endl<<"1";
	for(int i=1; i<=w; i++)
		cout<<"*";
	cout<<endl;
	for(int i=2; i<h; i++){
		cout<<i%10<<"*";
		for(int i=2; i<w; i++)
			cout<<" ";
		cout<<"*"<<endl;
	}
	cout<<h%10;
	for(int i=1; i<=w; i++)
		cout<<"*";
system("pause");
}
