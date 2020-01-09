#include <iostream>
#include <iomanip>
using namespace std;

void Sub_A(int &a, int &b){
	a+=2;
	b*=3;
	cout<<"副程式中的資料為：a = "<<a<<" b = "<<b;
}
void Sub_B(int *a, int *b){
	*a+=4;
	*b=*a+3;
	cout<<"副程式中的資料為：a = "<<a<<" b = "<<b;
}
void Sub_C(int *a, int &b){
	*a-=3;
	b=*a*5;
	cout<<"副程式中的資料為：a = "<<a<<" b = "<<b;
}
void Sub_D(int a, int b){
	a*=6;
	b+=7;
	cout<<"副程式中的資料為：a = "<<a<<" b = "<<b;
}
app3(){
	int x,y;
	cout<<"請輸入任意兩個整數：";
	cin>>x>>y;
	cout<<"程式執行前原始資料為：x = "<<x<<" y = "<<y<<endl;
	Sub_A(x,y);
	cout<<"程式執行後資料改變為：x = "<<x<<" y = "<<y<<endl;
	Sub_B(&x,&y);
	cout<<"程式執行後資料改變為：x = "<<x<<" y = "<<y<<endl;
	Sub_C(&x,y);
	cout<<"程式執行後資料改變為：x = "<<x<<" y = "<<y<<endl;
	Sub_D(x,y);
	cout<<"程式執行後資料改變為：x = "<<x<<" y = "<<y<<endl;
	system("pause");
}

