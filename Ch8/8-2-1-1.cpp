#include <iostream>
#include <iomanip>
using namespace std;

double cube(double x){
	double y;
	y=x*x*x;
	return y;
}
void app1(){
	double v1,v2;
	cout<<"�п�J�@�ӼƦr�G";
	cin>>v1;
	v2=cube(v1);
	cout<<v1<<"^3 = "<<v2<<endl;
	system("Pause");
}

