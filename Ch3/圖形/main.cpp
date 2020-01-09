#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	//斜線
	cout<<setw(7)<<"1234567"<<endl;
	cout<<setw(7)<<"*"<<endl;
	cout<<setw(6)<<"*"<<endl;
	cout<<setw(5)<<"*"<<endl;
	cout<<setw(4)<<"*"<<endl;
	cout<<setw(3)<<"*"<<endl;
	cout<<setw(2)<<"*"<<endl;
	cout<<setw(1)<<"*"<<endl;
	
	//直角三角形
	cout<<"    *    "<<endl; 
	cout<<"   ***   "<<endl; 
	cout<<"  *****  "<<endl; 
	cout<<" ******* "<<endl; 
	cout<<"*********"<<endl; 
	
	int x=0;
	for(int i=10;i>0;i--){
		x=x+1;
		cout<<x<<endl;
	}
	
	system("pause"); 
}
