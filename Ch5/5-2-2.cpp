#include <iostream>
#include <iomanip>
using namespace std;


main()
{
	int A,B,Y;
	bool z;
	cout<<"���޿�B��G\n";
	cout<<"�п�JA=";
	cin>>A;
	cout<<"�п�JB=";
	cin>>B;
	cout<<endl;
	cout<<"(1)�줸�B��p�U�G"<<endl;
	Y=A&B;
	cout<<"A and B ���G��"<<Y<<endl;
	Y=A|B;
	cout<<"A or B ���G��"<<Y<<endl;
	Y=A^B;
	cout<<"A xor B ���G��"<<Y<<endl<<endl;
	cout<<"(2)�޿�B��p�U�G"<<endl;
	z=(A<10) && (B<10);
	cout<<boolalpha;
	cout<<"A and B �Ҥp��10�H"<<z<<endl;
	z=(A>4) || (B<4);
	cout<<"A �j��4 or B �p��4�H"<<z<<endl;
	z=!(A>B);
	cout<<"A �j�� B ���ۤϡH"<<z<<endl<<endl;
	system("pause");
}
