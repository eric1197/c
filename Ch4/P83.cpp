#include <iostream>
#include <iomanip>
using namespace std;

app2()
{
	int kids,adults,day,price,price2,t; 
	enum Time {Lunch=658,Teatime=498,Dinner=758} time;

	cout<<"[(1)����B(2)����]�G";
	cin>>day;
	cout<<"[(1)���ȡB(2)�U�ȡB(3)�ߤW]�G";
	cin>>t;
	cout<<"�ൣ�H�ơG";
	cin>>kids;
	cout<<"���H�H�ơG";
	cin>>adults;
	
	
	if (day==1)
	{
		if (t==1)
			price=kids*(Lunch/2)+adults*Lunch;
		if (t==2)
			price=kids*(Teatime/2)+adults*Teatime;
		if (t==3)
			price=kids*(Dinner/2)+adults*Dinner;
	
	}
	if (day==2)
	{
		if (t==1)
			price=kids*((Lunch+100)/2)+adults*(Lunch+100);
		if (t==2)
			price=kids*((Teatime+100)/2)+adults*(Teatime+100);
		if (t==3)
			price=kids*((Dinner+100)/2)+adults*(Dinner+100);
	}
	
	price2=int(price*1.1);
	cout<<"���O"<<price2<<"��"<<endl; 
	system("pause");
}
