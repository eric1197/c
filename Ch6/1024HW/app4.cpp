#include <iostream>
#include <iomanip>
using namespace std;

app4()
{
	long long int a,i=0,sum=0,sum1=0,sum2=0;
	
	cout<<"�п�J�ƭȡG";
	cin>>a;
	if(a<=1) cout<<"���~�I"<<endl;
	if(a>1){
		for(i=1;i<=a;i++){
			sum+=i;
			if(i%2==0) sum1+=i;
			if(i%2!=0) sum2+=i;
		}
		cout<<"�M="<<sum<<endl;
		cout<<"���ƩM="<<sum1<<endl;
		cout<<"�_�ƩM="<<sum2<<endl;
	}
system("pause");
}
