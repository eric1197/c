#include <iostream>
#include <iomanip>
using namespace std;
int fac1(int n);

void app5(){
	int d,answer;
	cout<<"請輸入一個整數n(n>0))：";
	cin>>d;
	answer=fac1(d);
	cout<<"階乘"<<d<<"!="<<answer<<endl; 
	system("Pause");
}

int fac1(int n){
	if(n==0)
		return 1;
	else
		return n*fac1(n-1);
}

