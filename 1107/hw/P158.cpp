#include <iostream>
#include <iomanip>
using namespace std;
app1() {
	int i=0;
	long double x=0,y=40;
	cout<<"��J�Ȫ��p��(����)�G";
	cin>>x;
	x/=1000000000;
	while(x<y){
		x*=2;
		i+=1;
	}
	cout<<"�ȥ����骺���Ƭ��G"<<i<<endl;
	cout<<"�Ȫ��p�׬��G"<<setprecision(4)<<x<<"�U����"<<endl;
	system("Pause");
}
