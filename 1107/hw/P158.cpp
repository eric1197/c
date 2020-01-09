#include <iostream>
#include <iomanip>
using namespace std;
app1() {
	int i=0;
	long double x=0,y=40;
	cout<<"輸入紙的厚度(公分)：";
	cin>>x;
	x/=1000000000;
	while(x<y){
		x*=2;
		i+=1;
	}
	cout<<"紙必須折的次數為："<<i<<endl;
	cout<<"紙的厚度為："<<setprecision(4)<<x<<"萬公里"<<endl;
	system("Pause");
}
