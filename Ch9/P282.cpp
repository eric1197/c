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
	cout<<"===== �h�������B�� ====="<<endl;
	int i,degree_1,degree_2;
	cout<<"�п�J�h����1������ (Degree)��:";
	cin>>degree_1;
	cout<<"�п�J�h����2������(Degree)��:";
	cin>>degree_2;
	Polynomial *A=new Polynomial [degree_1+1];
	Polynomial *B=new Polynomial[degree_2+1];
	cout<<endl<<" �п�J�h����1���U�����ƪ��Y��!"<<endl;
	for (i= degree_1; i>=0; i--){
		cout<<"X^"<<i<<"���Y�Ƭ��G";
		cin>>A[i].coeff;
		A[i].expon=i;
	}
	cout<<endl<<"�п�J�h���� 2 ���U�����ƪ��Y��!"<<endl;
	for (i= degree_2; i>=0;i--){
		cout<<"X^"<<i<<"���Y�Ƭ��G";
		cin>>B[i].coeff;
		B[i].expon=i;
	}
	cout<<endl<<"��h�����ۭ������G��:"<<endl;
	MUL(A,B,degree_1,degree_2);
	cout<<endl<<endl;
	system("Pause");
}
