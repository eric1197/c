#include <iostream>
#include <iomanip>
using namespace std;
void app();
void app2();
void app3();
void app4();

main(){

int appchoice;
system("color 0F");
while(true){
	appchoice=-1;
	cout<<appchoice<<endl;
	system("cls");
	cout<<"請選擇程式"<<endl;
	cout<<"[(1)P141、(2)P146、(3)P148、(4)P158、(0)離開]:";
	cin>>appchoice;
	cout<<"--------------------------------------------------"<<endl;
	if(appchoice==1)
	app();
	if(appchoice==2)
	app2();
	if(appchoice==3)
	app3();
	if(appchoice==4)
	app4(); 
	if(appchoice==0){
		cout<<"exit";
		break;
	}
	cout<<endl;
}
//system("Pause");
}
