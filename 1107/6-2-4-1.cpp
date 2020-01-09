#include <iostream>
#include <iomanip>
using namespace std;

app3()
{
	int i,j;
	
	for (i=1;i<10;i++){
		for(j=1;j<10;j++)
			cout<<setw(3)<<j<<"*"<<setw(1)<<i<<"="<<setw(2)<<j*i;
		cout<<endl;
	}
	system("Pause");
}
