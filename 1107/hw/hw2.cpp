#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void app2()
{
	int num,g,h,k,hi=100,lo=1;
	srand((unsigned int)time(NULL));
	
	num=rand()%100+1;
	cout<<"是否要顯示終極密碼？(1)是、(2)否：";
	cin>>h;
	if(h==1) cout<<"終極密碼是"<<num<<endl;
	
	while(k!=num){
	cout<<"請輸入一個數值：";
	cin>>k;
		if(k<num){
			lo=k;
			cout<<"終極密碼介於"<<lo<<"與"<<hi<<"之間"<<endl;
		}
		if(k>num){
			hi=k;
			cout<<"終極密碼介於"<<lo<<"與"<<hi<<"之間"<<endl;
		}
		if(hi-lo==2){
			cout<<"終極密碼是"<<num<<endl;
			break;
		}
		if(k==num) cout<<"終極密碼是"<<num<<endl;
	}
	system("Pause");
}
