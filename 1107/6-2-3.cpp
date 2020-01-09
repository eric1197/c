#include <iostream>
#include <iomanip>
using namespace std;

app2()
{
	int n,k=1,fac=1;

	cout<<"請輸入1個自然數(n)：";
	cin>>n;
	cout<<n<<"!";
	do{
		fac*=k;
		k++;
	}while (k<=n);
	cout<<"的計算結果為"<<fac<<endl; 
	system("Pause");
}
