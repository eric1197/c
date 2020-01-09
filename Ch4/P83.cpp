#include <iostream>
#include <iomanip>
using namespace std;

app2()
{
	int kids,adults,day,price,price2,t; 
	enum Time {Lunch=658,Teatime=498,Dinner=758} time;

	cout<<"[(1)平日、(2)假日]：";
	cin>>day;
	cout<<"[(1)中午、(2)下午、(3)晚上]：";
	cin>>t;
	cout<<"兒童人數：";
	cin>>kids;
	cout<<"成人人數：";
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
	cout<<"收費"<<price2<<"元"<<endl; 
	system("pause");
}
