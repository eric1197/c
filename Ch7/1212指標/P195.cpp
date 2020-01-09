#include <iostream>
#include <iomanip>
using namespace std;


app4(){
	int a[5]={44,22,55,11,33};
	int i,j,temp;
	cout<<"陣列內的元素為：";
	for(i=0;i<5;i++)	cout<<setw(3)<<a[i];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(a[j+1]>a[j]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<endl<<"排序後的結果為：";
	for(i=0;i<5;i++)	cout<<setw(3)<<a[i];
	cout<<endl;
	system("pause");
}

