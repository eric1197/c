#include <iostream>
#include <iomanip>
using namespace std;

app1(){
	int a;
	int *pa;
	a=10;
	pa=&a;
	cout<<"a= "<<a<<endl;
	cout<<"&a= "<<&a<<endl;
	cout<<"pa= "<<pa<<endl;
	cout<<"*pa= "<<*pa<<endl;
	system("pause");
}

