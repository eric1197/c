#include <iostream>
#include <iomanip>
using namespace std;

app4()
{
	long long int a,i=0,sum=0,sum1=0,sum2=0;
	
	cout<<"叫块计";
	cin>>a;
	if(a<=1) cout<<"岿粇"<<endl;
	if(a>1){
		for(i=1;i<=a;i++){
			sum+=i;
			if(i%2==0) sum1+=i;
			if(i%2!=0) sum2+=i;
		}
		cout<<"㎝="<<sum<<endl;
		cout<<"案计㎝="<<sum1<<endl;
		cout<<"计㎝="<<sum2<<endl;
	}
system("pause");
}
