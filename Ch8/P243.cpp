#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime> 
using namespace std;
bool check(int ans,int num);

void app6(){
	int num,ans;
	bool flag;
	
	srand((unsigned int)time(NULL));
	ans=rand()%100+1;
	flag=false;
	cout<<"�q�Ʀr�C��(���פ���1~100����)"<<endl;
	while(!flag){
		cout<<"�п�J�ƭȡG";
		cin>>num;
		flag=check(ans,num);
	} 
	system("Pause");
}

bool check(int ans,int num){
	if(num>ans)	cout<<"��"<<num<<"�p"<<endl; 
	else if(num<ans)	cout<<"��"<<num<<"�j"<<endl;
	else if(num==ans){
		cout<<"����F�I�C�������C"<<endl;
		return true; 
	} 
	else return false;
}

