#include <iostream>
#include <iomanip>
using namespace std;

app2()
{
	int n,k=1,fac=1;

	cout<<"�п�J1�Ӧ۵M��(n)�G";
	cin>>n;
	cout<<n<<"!";
	do{
		fac*=k;
		k++;
	}while (k<=n);
	cout<<"���p�⵲�G��"<<fac<<endl; 
	system("Pause");
}
