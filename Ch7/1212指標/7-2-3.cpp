#include <iostream>
#include <iomanip>
using namespace std;

void Sub_A(int &a, int &b){
	a+=2;
	b*=3;
	cout<<"�Ƶ{��������Ƭ��Ga = "<<a<<" b = "<<b;
}
void Sub_B(int *a, int *b){
	*a+=4;
	*b=*a+3;
	cout<<"�Ƶ{��������Ƭ��Ga = "<<a<<" b = "<<b;
}
void Sub_C(int *a, int &b){
	*a-=3;
	b=*a*5;
	cout<<"�Ƶ{��������Ƭ��Ga = "<<a<<" b = "<<b;
}
void Sub_D(int a, int b){
	a*=6;
	b+=7;
	cout<<"�Ƶ{��������Ƭ��Ga = "<<a<<" b = "<<b;
}
app3(){
	int x,y;
	cout<<"�п�J���N��Ӿ�ơG";
	cin>>x>>y;
	cout<<"�{������e��l��Ƭ��Gx = "<<x<<" y = "<<y<<endl;
	Sub_A(x,y);
	cout<<"�{��������Ƨ��ܬ��Gx = "<<x<<" y = "<<y<<endl;
	Sub_B(&x,&y);
	cout<<"�{��������Ƨ��ܬ��Gx = "<<x<<" y = "<<y<<endl;
	Sub_C(&x,y);
	cout<<"�{��������Ƨ��ܬ��Gx = "<<x<<" y = "<<y<<endl;
	Sub_D(x,y);
	cout<<"�{��������Ƨ��ܬ��Gx = "<<x<<" y = "<<y<<endl;
	system("pause");
}

