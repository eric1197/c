#include <iostream>
#include <iomanip>
using namespace std;


void app1()
{
	int student[10]={80,90,60,40,80,20,70,60,70,60};
	int max=student[0];
	int min=student[0];
	int average=0;
	
	for(int i=0;i<10;i++){
		if(student[i]>max)max=student[i];
		if(student[i]<min)min=student[i];
		average+=student[i];
	}
	average/=10;
	cout<<"�������ơG"<<average<<endl;
	cout<<"�̰����O�G"<<max<<endl;
	cout<<"�̧C���O�G"<<min<<endl;
	system("Pause");
}
