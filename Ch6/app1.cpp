#include <iostream>
#include <iomanip>
using namespace std;

app()
{
	int score;
	
	cout<<"請輸入學生成績：";
	cin>>score;
	if(score>=90)
		cout<<"學生等第分數為A"<<endl;
	else if(score>=80)
		cout<<"學生等第分數為B"<<endl;
	else if(score>=70)
		cout<<"學生等第分數為C"<<endl;
	else if(score>=60)
		cout<<"學生等第分數為D"<<endl;
	else
		cout<<"學生等第分數為F"<<endl;
system("pause");
}
