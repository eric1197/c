#include <iostream>
#include <iomanip>
using namespace std;

app4()
{
	long long int a,i=0,sum=0,sum1=0,sum2=0;
	
	cout<<"請輸入數值：";
	cin>>a;
	if(a<=1) cout<<"錯誤！"<<endl;
	if(a>1){
		for(i=1;i<=a;i++){
			sum+=i;
			if(i%2==0) sum1+=i;
			if(i%2!=0) sum2+=i;
		}
		cout<<"和="<<sum<<endl;
		cout<<"偶數和="<<sum1<<endl;
		cout<<"奇數和="<<sum2<<endl;
	}
system("pause");
}
