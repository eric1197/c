#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

/*int lotto(int a[6],int b[7]){
	
}*/

app7(){
	int ra[49],a=0,b=0,c=0,i,j,temp,key,in[6]={0,0,0,0,0,0},*balls,*spe,*input=in;
	for(i=1;i<50;i++){
		ra[i]=i;
//		cout<<ra[i]<<endl;
	}
	srand((unsigned int)time(NULL));
	for(i=1;i<50;i++){
			int ram=rand()%49+1;
//			cout<<ram<<endl;
//			cout<<"i="<<i<<endl;
			temp=ra[ram];
			ra[ram]=ra[i];
			ra[i]=temp;
	}
/*	cout<<"ra [0]= "<<ra[0]<<endl;
	for(i=1;i<50;i++)
			cout<<"ra ["<<i<<"]= "<<ra[i]<<endl;*/
	balls=ra+1;
	spe=balls+6;
	
	cout<<"大樂透模擬遊戲"<<endl<<"請依序輸入六個號碼，必須是1~49的數字，且不可重複。"<<endl;
	j=0;
	while(*(input+5)==0){
		a=0;
		b=0;
		c=0;
		cout<<"第"<<j+1<<"個數字："; 
		cin>>key;
		if(key<1 or key>49) cout<<"輸入的數字超出1~49的範圍，請重新輸入！"<<endl;
		else if (key==*input or key==*(input+1) or key==*(input+2) or key==*(input+3) or key==*(input+4) or key==*(input+5))	cout<<"已經輸入過這個數字請重新輸入！"<<endl;
		else{
			*(input+j)=key;
			j++;
		}
	}
	do{
	for(i=1;i<50;i++){
			int ram=rand()%49+1;
//			cout<<ram<<endl;
//			cout<<"i="<<i<<endl;
			temp=ra[ram];
			ra[ram]=ra[i];
			ra[i]=temp;
	}
	cout<<endl<<endl;
	
	cout<<"本期你選的數字為：";
	for(i=0;i<6;i++) cout<<setw(4)<<*(input+i);
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(*(balls+j)>*(balls+j+1)){
				temp=*(balls+j);
				*(balls+j)=*(balls+j+1);
				*(balls+j+1)=temp;
			}
		}
	}
	cout<<endl<<"本期開出中獎號碼：";
	for(i=0;i<6;i++) cout<<setw(4)<<*(balls+i);
	cout<<"特別號："<<*spe<<endl;
	a=0;
	b=0;
	c=0;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(*(input+i)==*(balls+j)) a++;
		}
	}
	for(i=0;i<6;i++){
		if(*(input+i)==*(spe)) b++;
	}
	
	if(a==6)	cout<<"頭獎！";
	else if(a==5 and b==1)	cout<<"貳獎！";
	else if(a==5)	cout<<"參獎！";
	else if(a==4 and b==1)	cout<<"肆獎！";
	else if(a==4)	cout<<"伍獎！";
	else if(a==3 and b==1)	cout<<"陸獎！";
	else if(a==2 and b==1)	cout<<"柒獎！";
	else if(a==3)	cout<<"普獎！";
	else cout<<"你沒中獎！";
	cout<<"是否繼續開獎(1)是(2)否:";
	cin>>c;
	}while(c==1);
/*	reward=lotto(input,balls);*/
	system("pause");
}
