#include <iostream>
#include <iomanip>
using namespace std;
int fac1(int n);

void app5(){
	int d,answer;
	cout<<"�п�J�@�Ӿ��n(n>0))�G";
	cin>>d;
	answer=fac1(d);
	cout<<"����"<<d<<"!="<<answer<<endl; 
	system("Pause");
}

int fac1(int n){
	if(n==0)
		return 1;
	else
		return n*fac1(n-1);
}

