#include <iostream>
#include <iomanip>
using namespace std;
void app1();
void app2();
void app3();
void app4();
/*void app5();*/ 

int main()
{
	system("color 0F");
	int appchoice;
	  do{
	    //appchoice=-1;
	    system("cls");
	    cout<<"請選擇程式"<<endl;
	    cout<<"[(1)6-2-2.cpp、(2)6-2-3.cpp、(3)6-2-4-1.cpp、(3)8-1-2-1.cpp、(0)Exit]:";
	    cin>>appchoice;
	    cout<<"--------------------------------"<<endl;
	    if(appchoice==1)
	    app1();
	    if(appchoice==2)
	    app2();
	    if(appchoice==3)
	    app3();
		if(appchoice==4)
	    app4(); 
/*	    if(appchoice==5)
	    app5();
	    if(appchoice==0){
	      cout<<"exit";
	      break;
	    }*/
//	    cout<<endl;
	  }while(appchoice!=0);
	  cout<<"Exit...";
//	system("Pause");
}
