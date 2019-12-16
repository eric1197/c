#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

/*int lotto(int a[6],int b[7]){
	
}*/

int main(){
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
	
	cout<<"lotto!"<<endl<<"Choose 1~49, and don't choose the same."<<endl;
	j=0;
	while(*(input+5)==0){
		a=0;
		b=0;
		c=0;
		cout<<"the "<<j+1<<" number from you.";
		cin>>key;
		if(key<1 or key>49) cout<<"Please between 1~49"<<endl;
		else if (key==*input or key==*(input+1) or key==*(input+2) or key==*(input+3) or key==*(input+4) or key==*(input+5))	cout<<"You key the same number!"<<endl;
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
	
	cout<<"Your numbers";
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
	cout<<endl<<"winning numbers ";
	for(i=0;i<6;i++) cout<<setw(4)<<*(balls+i);
	cout<<"special number "<<*spe<<endl;
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
	
	if(a==6)	cout<<"You hit the jackpot!!!";
	else if(a==5 and b==1)	cout<<"2nd!";
	else if(a==5)	cout<<"3rd!";
	else if(a==4 and b==1)	cout<<"4th!";
	else if(a==4)	cout<<"5th!";
	else if(a==3 and b==1)	cout<<"6th!";
	else if(a==2 and b==1)	cout<<"7th!";
	else if(a==3)	cout<<"normal reward!";
	else cout<<"Nothing...";
	cout<<"again? (1)Y (2)N:";
	cin>>c;
	}while(c==1);
/*	reward=lotto(input,balls);*/
//	system("pause");
//	return 1;
}
