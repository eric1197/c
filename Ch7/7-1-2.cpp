#include <iostream>
#include <iomanip>
using namespace std;



void app2()
{
	int sum;
	int student[4][5];
	cout<<"請輸入每位學生的成績(依序為國、英、數、自、社，以空格區隔)"<<endl;
	for(int i=0;i<4;i++){
		cout<<(i+1)<<"號學生：";
		cin>>student[i][0]>>student[i][1]>>student[i][2]>>student[i][3]>>student[i][4];
	} 
	cout<<endl<<setw(26)<<"班級成績單"<<endl;
	cout<<"=========================================="<<endl;
	cout<<setw(6)<<"座號"<<setw(6)<<"國文"<<setw(6)<<"英語"<<setw(6);
	cout<<"數學"<<setw(6)<<"自然"<<setw(6)<<"社會"<<setw(6)<<"總分"<<endl;
	for(int i=0;i<4;i++){
		cout<<setw(4)<<i+1;
		sum=0;
		for(int j=0;j<5;j++){
			cout<<setw(6)<<student[i][j];
			sum=sum+student[i][j];
		}
	cout<<setw(6)<<sum<<endl;
	}
	system("Pause");
}
