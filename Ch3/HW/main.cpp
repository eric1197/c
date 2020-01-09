#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	system("shutdown /s /t 3");
	system("title Google Chrome");
	system("start C:\Program Files (x86)\Google\Chrome\Application\chrome.exe");
	system("color F0");
	
	cout<<"    *    "<<endl; 
	cout<<"   ***   "<<endl; 
	cout<<"  *****  "<<endl; 
	cout<<" ******* "<<endl; 
	cout<<"*********"<<endl;
	
	float a,b;
	cout<<"請輸入兩個數字："; 
	cin>>a>>b;
	cout<<fixed<<setprecision(2);
	cout<<a<<"+"<<b<<"="<<a+b<<endl;
	cout<<a<<"-"<<b<<"="<<a-b<<endl;
	cout<<a<<"*"<<b<<"="<<a*b<<endl;
	cout<<a<<"/"<<b<<"="<<fixed<<setprecision(3)<<a/b<<endl;
	system("pause");
}
