#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
main(){
int s,length,width,height,top,bottom,radius;
const float pi=3.14159f;
bool loop=true;
while(loop){
	cout<<"�X��ϧΨD��"<<endl;
	cout<<"[(1)�����T���ΡB(2)��ΡB(3)��ΡB(4)���}]:";
	cin>>s;
	if(s==1){
		cout<<"�Ш̧ǿ�J�T���Ϊ����B���G";
		cin>>bottom>>height;
		cout<<"�T���έ��n���G"<<(bottom*height/2)<<endl;
}
	else if(s==2){
		cout<<"�Ш̧ǿ�J��Ϊ��W���B�U���B���G";
		cin>>top>>bottom>>height;
		cout<<"��έ��n���G"<<((top+bottom)*height/2)<<endl;
	}
	else if(s==3){
		cout<<"�Ш̧ǿ�J��Ϊ��b�|�G";
		cin>>radius;
		cout<<"��έ��n���G"<<(pi*radius*radius)<<endl;
	}
	else
		loop=false;
	cout<<endl;
}
system("Pause");
}
