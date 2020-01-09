#include <iostream>
#include <iomanip>
using namespace std;


main()
{
	int A,B,Y;
	float z;
	cout<<"請輸入整數A=";
	cin>>A;
	cout<<"請輸入整數B=";
	cin>>B;
	cout<<endl;
	cout<<"(1)算術運算如下："<<endl;
	Y=A+B;
	cout<<"A加B的結果為"<<Y<<endl;
	Y=A-B;
	cout<<"A減B的結果為"<<Y<<endl;
	Y=A*B;
	cout<<"A乘B的結果為"<<Y<<endl;
	z=(float) A/B;
	cout<<"A除B的結果為"<<z<<endl;
	Y=A%B;
	cout<<"A除B的餘數為"<<Y<<endl<<endl;
	cout<<"(2)遞增、遞減運算如下："<<endl;
	A++;
	cout<<"A遞增之後為"<<A<<endl;
	B--;
	cout<<"B遞減之後為"<<B<<endl;
	A*=B;
	cout<<"A=A*B="<<A<<endl<<endl; 
	system("pause");
}
