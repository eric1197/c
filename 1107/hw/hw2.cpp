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
	cout<<"�O�_�n��ܲ׷��K�X�H(1)�O�B(2)�_�G";
	cin>>h;
	if(h==1) cout<<"�׷��K�X�O"<<num<<endl;
	
	while(k!=num){
	cout<<"�п�J�@�ӼƭȡG";
	cin>>k;
		if(k<num){
			lo=k;
			cout<<"�׷��K�X����"<<lo<<"�P"<<hi<<"����"<<endl;
		}
		if(k>num){
			hi=k;
			cout<<"�׷��K�X����"<<lo<<"�P"<<hi<<"����"<<endl;
		}
		if(hi-lo==2){
			cout<<"�׷��K�X�O"<<num<<endl;
			break;
		}
		if(k==num) cout<<"�׷��K�X�O"<<num<<endl;
	}
	system("Pause");
}
