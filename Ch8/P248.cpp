#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;
int d[3][3]={0};
void plot();
int check8();

void app8(){
	int x,y,side,count;
	bool loop;
	
	side=1;
	count=0;
	loop=true;
	plot();
	do{
		cout<<"請輸入座標(x y)=";
		cin>>y>>x;
		if(d[x][y]==0){
			d[x][y]=side;
			side=-1*side;
			count+=1;
		}
		plot();
		if(count==9 || check8()==1 || check8()==-1)
			loop=false;
	}while(loop);
	if(check8()==1)
		cout<<"○獲勝"<<endl;
	else if(check8()==-1)
		cout<<"●獲勝"<<endl;
	else
		cout<<"雙方平手"<<endl; 
	system("Pause");
}

void plot(){
	int i,j;
	cout<<"y\\x"<<"0  1  2"<<endl;
	for(i=0;i<3;i++){
		cout<<setw(2)<<i;
		for(j=0;j<3;j++){
			if(d[i][j]==0)
				cout<<setw(3)<<"□";
			if(d[i][j]==1)
				cout<<setw(3)<<"○";
			if(d[i][j]==-1)
				cout<<setw(3)<<"●";
		}
		cout<<endl;
	}
	cout<<endl;
}
int check8(){
	int v1,v2,v3,v4,v5,v6,v7,v8;
	v1=d[0][0]+d[0][1]+d[0][2];
	v2=d[1][0]+d[1][1]+d[1][2];
	v3=d[2][0]+d[2][1]+d[2][2];
	v4=d[0][0]+d[1][0]+d[2][0];
	v5=d[0][1]+d[1][1]+d[2][1];
	v6=d[0][2]+d[1][2]+d[2][2];
	v7=d[0][0]+d[1][1]+d[2][2];
	v8=d[2][0]+d[1][1]+d[0][2];
	if(v1==3 || v2==3 || v3==3 || v4==3 || v5==3 || v6==3 || v7==3 || v8==3)
		return 1;
	else if(v1==-3 || v2==-3 || v3==-3 || v4==-3 || v5==-3 || v6==-3 || v7==-3 || v8==-3)
		return -1;
	else
		return 0;
}

