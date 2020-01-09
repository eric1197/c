#include <iostream>
#include <iomanip>
using namespace std;


main()
{
	int A,B,Y;
	bool z;
	cout<<"基本邏輯運算：\n";
	cout<<"請輸入A=";
	cin>>A;
	cout<<"請輸入B=";
	cin>>B;
	cout<<endl;
	cout<<"(1)位元運算如下："<<endl;
	Y=A&B;
	cout<<"A and B 結果為"<<Y<<endl;
	Y=A|B;
	cout<<"A or B 結果為"<<Y<<endl;
	Y=A^B;
	cout<<"A xor B 結果為"<<Y<<endl<<endl;
	cout<<"(2)邏輯運算如下："<<endl;
	z=(A<10) && (B<10);
	cout<<boolalpha;
	cout<<"A and B 皆小於10？"<<z<<endl;
	z=(A>4) || (B<4);
	cout<<"A 大於4 or B 小於4？"<<z<<endl;
	z=!(A>B);
	cout<<"A 大於 B 的相反？"<<z<<endl<<endl;
	system("pause");
}
