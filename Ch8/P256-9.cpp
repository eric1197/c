#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int count=0;

int count_0(int *be){
//	for(int i=0;i<40;i++){
	if(*(be+count)==1 or *(be+count)==2)	return count;
	if(*(be+count)==0){
		count++;
		count_0(be);
//		cout<<endl<<be<<"+"<<count<<" = "<<*(be+count)<<endl;
	}
//	}
}

app9(){
	system("color 0F");
	int i,j,before[41]={1,1,1,1},*be=before,ra[40],random,temp,a,b,c,d,e,r,k=0,p=0,space=0,total=0,total_again=0,total_space=0;
	bool loop=true;
	count=0;
	before[40]=2;
//	char space[40];
	srand((unsigned int)time(NULL));
	
	for(i=0;i<40;i++){  //�~�P�t��k 
			int ram=rand()%34+5;  //���@�H���ü�ram����5~39 
			temp=*(be+ram);  //�N �üư}�C��ram�� �s�� �Ȧs�ܼ� (�洫�B�J1) 
			*(be+ram)=*(be+i);  //�N �üư}�C��i�� �s�� �üư}�C��ram�� (�洫�B�J2) 
			*(be+i)=temp;  //�N �Ȧs�ܼ� �s�^ �üư}�C��i�� (�洫����) 
	}
	
	cout<<"��l��ơG";
	for(i=0;i<40;i++)	cout<<before[i];
	cout<<endl<<"���Y��ơG";
	
	for(i=0;i<5;i++){
//	cout<<count_0(be)<<endl;
	space=count_0(be+total_again); //+total_again
//	if(space==0){
//		cout<<"_";
//	}
	total_space=total_space+space;
//	cout<<endl<<"space = "<<space<<endl;
	total_again=total_again+space+1;
	
	while(space!=0){
		r=space%2;
		space=space/2;
		k=k+r*pow(10,p++);
	}
	if(k!=0)		cout<<k;
//	cout<<endl<<"*(be+space)="<<*(be+total_space)<<endl;
	if(*(be+total_space)==1)	cout<<"_";
	total_space++;
	total+=p;
	count=0;
//	while(times==5)	loop=false;
	k=0;
	p=0;
	}
	cout<<endl<<"���Y�v�G"<<(float)(total+4)/40*100<<"%"<<endl;
	cout<<endl;
	system("Pause");
}

