#include <iostream>
#include <iomanip>
using namespace std;

float det (float a[2],float b[2]){
	float d;
	d=a[0]*b[1]-b[0]*a[1];
	return d;
}

app6(){
	float a[2],b[2],c[2];
	float delta, deltaX,deltaY;
	float x,y;
	cout<<"�п�J�G���@����{���Y�ơG"<<endl;
	cin>>a[0]>>b[0]>>c[0];
	cin>>a[1]>>b[1]>>c[1];
	delta=det(a,b);
	deltaX=det(c,b);
	deltaY=det(a,c);
	if(delta!=0){
		x=deltaX/delta;
		y=deltaY/delta;
		cout<<"��{�����ߤ@��";
		cout<<"(x="<<x<<"�Ay="<<y<<")"<<endl;
	}
	else if (delta==deltaX==deltaY==0)
		cout<<"�L���h��"<<endl;
	else
		cout<<"�L��"<<endl;
	system("pause");
}

