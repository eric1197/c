#include <iostream>
#include <iomanip>
using namespace std;



void app2()
{
	int sum;
	int student[4][5];
	cout<<"�п�J�C��ǥͪ����Z(�̧Ǭ���B�^�B�ơB�ۡB���A�H�Ů�Ϲj)"<<endl;
	for(int i=0;i<4;i++){
		cout<<(i+1)<<"���ǥ͡G";
		cin>>student[i][0]>>student[i][1]>>student[i][2]>>student[i][3]>>student[i][4];
	} 
	cout<<endl<<setw(26)<<"�Z�Ŧ��Z��"<<endl;
	cout<<"=========================================="<<endl;
	cout<<setw(6)<<"�y��"<<setw(6)<<"���"<<setw(6)<<"�^�y"<<setw(6);
	cout<<"�ƾ�"<<setw(6)<<"�۵M"<<setw(6)<<"���|"<<setw(6)<<"�`��"<<endl;
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
