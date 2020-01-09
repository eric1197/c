#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;


app6() 
{
	int ra[10]={0,1,2,3,4,5,6,7,8,9};
	char num[4],input[100];
	int temp,temp2,i,k,j,A=0,B=01;
	srand((unsigned int)time(NULL));

	while(ra[0]==0){
		for(i=0;i<10;i++){
			int ram=rand()%10,ram2=rand()%10;
//			cout<<"i="<<i<<endl;
			temp=ra[ram];
			ra[ram]=ra[ram2];
			ra[ram2]=temp;
		}
	}
	for(i=0;i<4;i++) num[i]=ra[i]+'0'; //itoa(ra[i],num,10);
//	cout<<num;

	cout<<"1A2B猜數字遊戲"<<endl<<"是否要顯示答案？(1)是(2)否";
	cin>>k;
	if(k==1) cout<<num;
	while(A!=4){
		A=0;
		B=0; 
		cout<<endl<<"輸入四位不重複數字：";
		cin>>input;
		if(strlen(input)!=4) cout<<"輸入的字數長度不是四位數！"<<endl;
		else if(
		input[0]==input[1] or input[0]==input[2] or input[0]==input[3] or
		input[1]==input[2] or input[1]==input[3] or input[1]==input[0] or
		input[2]==input[3] or input[2]==input[0] or input[2]==input[1] or
		input[3]==input[0] or input[3]==input[1] or input[3]==input[2]
		)
			cout<<"輸入的數字重複！"<<endl; 
		else{
			for(i=0;i<4;i++){
				if(input[i]==num[i]) A++;
	 			for(j=0;j<4;j++)
	  			if(input[i]==num[j] && i!=j) B++;
			}
			cout<<A<<"A"<<B<<"B"<<endl; 
		}
	}
	cout<<"答對了！";
	system("Pause");
}
