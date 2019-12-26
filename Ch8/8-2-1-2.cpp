#include <iostream>
#include <iomanip>
using namespace std;

long long int fac(int n){
	long long int i,temp=1;
	for(i=1;i<=n;i++){
		temp*=i;
	}
	return temp;
}

long long int c(int n,int k){
//	cout<<fac(n)<<" "<<fac(k)<<" "<<fac(n-k);
	return fac(n)/fac(k)/fac(n-k);
}
void app2(){
	long long int combination;
	combination=/*c(49,6);*/c(4,2)*c(3,1)*c(5,2);
	cout<<"上場組合共有"<<combination<<"種"<<endl;
	system("Pause");
}

