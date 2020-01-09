#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

app4()
{
	int i,num;
	srand((unsigned int)time(NULL));
	
	for (i=0;i<10;i++){
		num=rand()%100+1;
		cout<<"¶Ã¼Æ­È"<<num<<endl;
	}
	system("Pause");
}
