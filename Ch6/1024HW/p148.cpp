#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

app3()
{
	int input,i,i2,total=0;
	cout<<"�п�J�@�ӼƦr�G";
	cin>>input;
	for(i=2;i<=input;i++){
		bool isPrime=1;
		for(i2=2;i2<=sqrt(i);i2++){
			if(i%i2==0) isPrime=0;
		}
		if(isPrime==1){
			cout<<setw(12)<<i;
			total++;
		}
	}
	cout<<endl<<"�@"<<total<<"�ӽ��"<<endl; 
system("pause");
}
