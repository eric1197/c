#include <iostream>
#include <iomanip>
using namespace std;


main()
{
	int A,B,Y;
	float z;
	cout<<"�п�J���A=";
	cin>>A;
	cout<<"�п�J���B=";
	cin>>B;
	cout<<endl;
	cout<<"(1)��N�B��p�U�G"<<endl;
	Y=A+B;
	cout<<"A�[B�����G��"<<Y<<endl;
	Y=A-B;
	cout<<"A��B�����G��"<<Y<<endl;
	Y=A*B;
	cout<<"A��B�����G��"<<Y<<endl;
	z=(float) A/B;
	cout<<"A��B�����G��"<<z<<endl;
	Y=A%B;
	cout<<"A��B���l�Ƭ�"<<Y<<endl<<endl;
	cout<<"(2)���W�B����B��p�U�G"<<endl;
	A++;
	cout<<"A���W���ᬰ"<<A<<endl;
	B--;
	cout<<"B����ᬰ"<<B<<endl;
	A*=B;
	cout<<"A=A*B="<<A<<endl<<endl; 
	system("pause");
}
