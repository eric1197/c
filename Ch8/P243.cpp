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
	cout<<"猜數字遊戲(答案介於1~100之間)"<<endl;
	while(!flag){
		cout<<"請輸入數值：";
		cin>>num;
		flag=check(ans,num);
	} 
	system("Pause");
}

bool check(int ans,int num){
	if(num>ans)	cout<<"比"<<num<<"小"<<endl; 
	else if(num<ans)	cout<<"比"<<num<<"大"<<endl;
	else if(num==ans){
		cout<<"答對了！遊戲結束。"<<endl;
		return true; 
	} 
	else return false;
}

