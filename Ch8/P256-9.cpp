#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int count=0;

int count_0(int *be){
//	for(int i=0;i<40;i++){
	if(*(be+count)==1)	return count;
	if(*(be+count)==0){
		count++;
		count_0(be);
	}
//	}
}

void app9(){
	int i,j,before[40],*be=before,ra[40],random,temp,a,b,c,d,e,r,k=0,p=0,space=0,total=0;
	count=0;
//	char space[40];
	srand((unsigned int)time(NULL));
	
	for(i=0;i<40;i++){
		before[i]=0;
		ra[i]=i;
	}
	
	for(i=0;i<40;i++){ 
			int ram=rand()%40;
			temp=ra[ram];
			ra[i]=ra[ram];
			ra[i]=temp;
			 
	}
	for(i=0;i<4;i++)	before[ra[i]]=1;
	
	cout<<"原始資料：";
	for(i=0;i<40;i++)	cout<<before[i];
	cout<<endl<<"壓縮資料：";
	
	for(i=0;i<5;i++){
//	cout<<count_0(be)<<endl;
	space=count_0(be+count);
	while(space!=0){
		r=space%2;
		space=space/2;
		k=k+r*pow(10,p++);
	}
	cout<<k;
	total=total+p;
//	cout<<p;
	cout<<"_";
	count=0;
	}
	cout<<endl;
	system("Pause");
}

