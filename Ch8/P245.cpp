#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime> 
using namespace std;
int gcd(int a,int b);

void app7(){
	int num1,num2;
	cout<<"請輸入第1個正整數：";
	cin>>num1;
	cout<<"請輸入第2個正整數：";
	cin>>num2;
	cout<<"最大公因數為："<<gcd(num1,num2)<<endl;
	system("Pause");
}

int gcd(int a,int b){
	if(b == 0) 
        return a; 
	return gcd(b, a % b); 
}

