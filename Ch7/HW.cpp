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

	cout<<"1A2B�q�Ʀr�C��"<<endl<<"�O�_�n��ܵ��סH(1)�O(2)�_";
	cin>>k;
	if(k==1) cout<<num;
	while(A!=4){
		A=0;
		B=0; 
		cout<<endl<<"��J�|�줣���ƼƦr�G";
		cin>>input;
		if(strlen(input)!=4) cout<<"��J���r�ƪ��פ��O�|��ơI"<<endl;
		else if(
		input[0]==input[1] or input[0]==input[2] or input[0]==input[3] or
		input[1]==input[2] or input[1]==input[3] or input[1]==input[0] or
		input[2]==input[3] or input[2]==input[0] or input[2]==input[1] or
		input[3]==input[0] or input[3]==input[1] or input[3]==input[2]
		)
			cout<<"��J���Ʀr���ơI"<<endl; 
		else{
			for(i=0;i<4;i++){
				if(input[i]==num[i]) A++;
	 			for(j=0;j<4;j++)
	  			if(input[i]==num[j] && i!=j) B++;
			}
			cout<<A<<"A"<<B<<"B"<<endl; 
		}
	}
	cout<<"����F�I";
	system("Pause");
}
