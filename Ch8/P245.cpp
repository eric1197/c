#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime> 
using namespace std;
int gcd(int a,int b);

void app7(){
	int num1,num2;
	cout<<"�п�J��1�ӥ���ơG";
	cin>>num1;
	cout<<"�п�J��2�ӥ���ơG";
	cin>>num2;
	cout<<"�̤j���]�Ƭ��G"<<gcd(num1,num2)<<endl;
	system("Pause");
}

int gcd(int a,int b){
	if(b == 0) 
        return a; 
	return gcd(b, a % b); 
}

