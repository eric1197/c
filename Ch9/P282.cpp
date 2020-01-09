#include <iostream>
#include <iomanip>
using namespace std;

struct Polynomial {
	int coeff;
	int expon;
};
void MUL (Polynomial *a,Polynomial *b, int m,int n){
	int i,j;
	Polynomial *C=new Polynomial [m+n+1];
	for(i=m+n;i>=0;i--)	
		C[i].coeff=0;
	for (i=m;i>=0;i--)
		for (j=n;j>=0; j--)
			C[i+j].coeff+=a[i].coeff*b[j].coeff;
	
	for (j=m+n;j>=0;j--){
	C[j].expon=j;
	if (C[j].coeff!=0)
		if (C[j].expon>0)
			if (C[j].coeff>0)
				cout <<"+"<<C[j].coeff<<"X^"<<C[j].expon;
			else
				cout<<C[j].coeff<<"X^"<<C[j].expon;
		else
			if (C[j].coeff>0)
				cout<<"+"<<C[j].coeff;
			else
				cout<<C[j].coeff;
	}
}
app5(){
	cout<<"===== 多項式的運算 ====="<<endl;
	int i,degree_1,degree_2;
	cout<<"請輸入多項式1的次方 (Degree)為:";
	cin>>degree_1;
	cout<<"請輸入多項式2的次方(Degree)為:";
	cin>>degree_2;
	Polynomial *A=new Polynomial [degree_1+1];
	Polynomial *B=new Polynomial[degree_2+1];
	cout<<endl<<" 請輸入多項式1之各項指數的係數!"<<endl;
	for (i= degree_1; i>=0; i--){
		cout<<"X^"<<i<<"的係數為：";
		cin>>A[i].coeff;
		A[i].expon=i;
	}
	cout<<endl<<"請輸入多項式 2 之各項指數的係數!"<<endl;
	for (i= degree_2; i>=0;i--){
		cout<<"X^"<<i<<"的係數為：";
		cin>>B[i].coeff;
		B[i].expon=i;
	}
	cout<<endl<<"兩多項式相乘的結果為:"<<endl;
	MUL(A,B,degree_1,degree_2);
	cout<<endl<<endl;
	system("Pause");
}
