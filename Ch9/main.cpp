#include <iostream>
#include <iomanip>
using namespace std;
void app1();
void app2();
void app3();
void app4();
void app5();
/*void app6();
void app7();
/*void app8();*/

int main()
{
	int appchoice;
	system("color 0F");
  do{
    //appchoice=-1;
    system("cls");
    cout<<"請選擇程式"<<endl;
    cout<<"[app(1~8)、(0)Exit]:";
    cin>>appchoice;
    cout<<"------------------------------------------------"<<endl;
    if(appchoice==1)
    app1();
    if(appchoice==2)
    app2();
    if(appchoice==3)
    app3();
    if(appchoice==4)
    app4(); 
    if(appchoice==5)
    app5();
/*    if(appchoice==6)
    app6();
    if(appchoice==7)
    app7();
/*    if(appchoice==8)
    app8();
    /*if(appchoice==0){
      cout<<"exit";
      break;
    }*/
  }while(appchoice!=0);
  cout<<"Exit..."<<endl;
//  system("Pause");
}

