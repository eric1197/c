#include <iostream>
#include <iomanip>
using namespace std;

app()
{
	int month;
	enum Four_Season {Spring=1,Summer,Autumn,Winter} season;

	cout<<"四季中的第"<<Spring<<"季是：春天！"<<endl;
	cout<<"四季中的第"<<Summer<<"季是：夏天！"<<endl;
	cout<<"四季中的第"<<Autumn<<"季是：秋天！"<<endl;
	cout<<"四季中的第"<<Winter<<"季是：冬天！"<<endl;
	cout<<"請輸入月份(1~12)：";
	cin>>month;
	if (month<=4 && month>=2) season=Spring;
	if (month<=7 && month>=5) season=Summer;
	if (month<=10 && month>=8) season=Autumn;
	if (month<=12 && month>=11 || month==1) season=Winter;
	cout<<month<<"月份隸屬四季中的第"<<season<<"季"<<endl; 
	system("pause");
}
