#include <iostream>
#include <iomanip>
using namespace std;

app()
{
	int score;
	
	cout<<"�п�J�ǥͦ��Z�G";
	cin>>score;
	if(score>=90)
		cout<<"�ǥ͵��Ĥ��Ƭ�A"<<endl;
	else if(score>=80)
		cout<<"�ǥ͵��Ĥ��Ƭ�B"<<endl;
	else if(score>=70)
		cout<<"�ǥ͵��Ĥ��Ƭ�C"<<endl;
	else if(score>=60)
		cout<<"�ǥ͵��Ĥ��Ƭ�D"<<endl;
	else
		cout<<"�ǥ͵��Ĥ��Ƭ�F"<<endl;
system("pause");
}
