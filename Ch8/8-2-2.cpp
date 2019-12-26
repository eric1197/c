#include <iostream>
#include <iomanip>
using namespace std;

int x,y;

void Sub_A(){
	int x=0,y=0;
	cout<<"Sub_A中的資料為：x="<<x<<"，記憶體位址 = "<<&x<<endl;
	cout<<"Sub_A中的資料為：y="<<y<<"，記憶體位址 = "<<&y<<endl;
}
void Sub_B(){
	x=0;
	y=0;
	cout<<"Sub_B中的資料為：x="<<x<<"，記憶體位址 = "<<&x<<endl;
	cout<<"Sub_B中的資料為：y="<<y<<"，記憶體位址 = "<<&y<<endl;
}
void app3(){
	cout<<"請輸入任意兩個整數：";
	cin>>x>>y;
	cout<<"main程式的資料為：x="<<x<<"，記憶體位址 = "<<&x<<endl;
	cout<<"main程式的資料為：y="<<y<<"，記憶體位址 = "<<&y<<endl<<endl;
	Sub_A();
	cout<<"main程式的資料為：x="<<x<<"，記憶體位址 = "<<&x<<endl;
	cout<<"main程式的資料為：y="<<y<<"，記憶體位址 = "<<&y<<endl<<endl;
	Sub_B();
	cout<<"main程式的資料為：x="<<x<<"，記憶體位址 = "<<&x<<endl;
	cout<<"main程式的資料為：y="<<y<<"，記憶體位址 = "<<&y<<endl<<endl;
	system("Pause");
}

