#include <iostream>
#include <iomanip>
using namespace std;

app()
{
	int month;
	enum Four_Season {Spring=1,Summer,Autumn,Winter} season;

	cout<<"�|�u������"<<Spring<<"�u�O�G�K�ѡI"<<endl;
	cout<<"�|�u������"<<Summer<<"�u�O�G�L�ѡI"<<endl;
	cout<<"�|�u������"<<Autumn<<"�u�O�G��ѡI"<<endl;
	cout<<"�|�u������"<<Winter<<"�u�O�G�V�ѡI"<<endl;
	cout<<"�п�J���(1~12)�G";
	cin>>month;
	if (month<=4 && month>=2) season=Spring;
	if (month<=7 && month>=5) season=Summer;
	if (month<=10 && month>=8) season=Autumn;
	if (month<=12 && month>=11 || month==1) season=Winter;
	cout<<month<<"������ݥ|�u������"<<season<<"�u"<<endl; 
	system("pause");
}
