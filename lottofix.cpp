#include <iostream>  //�ŧi���Y�� <iostream> 
#include <iomanip>  //�ŧi���Y�� <iomanip>
#include <ctime>  //�ŧi���Y�� <ctime>
#include <cstdlib>  //�ŧi���Y�� <cstdlib>
using namespace std;  //�ŧi�W�٪Ŷ� std 

int keyagain(int key,int *input){  //������Ҩ禡_�O�_���ƿ�J(���Ҷ��ƤW�� 6�� ) 
	for (int i=0;i<6;i++)	if (key==*(input+i)) return 1;  //���ư��� �Y�����ƼƦr�h�^�� 1 
	return 0;  //�L���ƫh�^�� 0 
}
void lotto_check(int *input,int *balls,int spe,int &a,int &b){  //�ֳz����禡 
	a=0;  //�Na�Ω󴶳q���������ƭp�� ��l�Ƭ�0 
	b=0;  //�Nb�Ω�S�O���������ƭp�� ��l�Ƭ�0 
	for(int i=0;i<6;i++){  //for�j�� ���J�ۿ����
		for(int j=0;j<6;j++){  //for�j�� �ֹ�}�X���� 
			if(*(input+i)==*(balls+j)) a++;  //�p�G �ۿ����=�}�X����(���q) �ha+1 
		}
	}
	for(int i=0;i<6;i++){  //for�j�� ���J�ۿ���� 
		if(*(input+i)==spe) b++;  //�p�G �ۿ����=�}�X����(�S�O) �hb+1
	}
	if(a==6)	cout<<"---------------------------------�Y���I-----------------------------------------";  //��X�Y������ 
	else if(a==5 and b==1)	cout<<"---------------------------------�L���I-----------------------------------------";  //��X�L������
	else if(a==5)	cout<<"----------------------------�Ѽ��I-----------------------------------------";  //��X�Ѽ�����
	else if(a==4 and b==1)	cout<<"---------------------------------�v���I-----------------------------------------";  //��X�v������
	else if(a==4)	cout<<"---------------------------------����I-----------------------------------------";  //��X�������
	else if(a==3 and b==1)	cout<<"---------------------------------�����I-----------------------------------------";  //��X��������
	else if(a==2 and b==1)	cout<<"---------------------------------�m���I-----------------------------------------";  //��X�m������
	else if(a==3)	cout<<"---------------------------------�����I-----------------------------------------";  //��X��������
	else cout<<"�A�S�����I";  //��X�S�������� 
}

main(){  //�D�{�� 
	int ra[50],*random=ra,*balls=random+1,*spe=balls+6,i,j,temp,key,in[6]={0,0,0,0,0,0},*input=in,a=0,b=0,c=0;  //�ŧi�ܼơB�}�C�B���� 
	cout<<"�j�ֳz�����C��"<<endl<<"�Ш̧ǿ�J���Ӹ��X�A�����O1~49���Ʀr�A�B���i���ơC"<<endl;  //��X������r 
	j=0;  //�Nj�Ω�Ʀr�p�� ��l�Ƭ�0 
	while(*(input+5)==0){  //�b��6�ӼƦr�Q��J�����e���ư��� 
		cout<<"��"<<j+1<<"�ӼƦr�G";   //��ܥثe��J���� 
		cin>>key;  //��J�Ȧs�Jkey 
		if(key<1 or key>49) cout<<"��J���Ʀr�W�X1~49���d��A�Э��s��J�I"<<endl;  //������ҡGkey�d��1~49? 
		else if (keyagain(key,input))	cout<<"�w�g��J�L�o�ӼƦr�A�Э��s��J�I"<<endl;  //������ҡGkey�O�_���ƿ�J?  
		else{  //�Y������ҥ��Ƴq�L 
			*(input+j)=key;  //�N��J�Ȧs�J�O����(input+j) 
			j++;  //���ܤU�@�Ӽ� 
		}
	}
	for(i=1;i<50;i++)	*(random+i)=i; //�üư}�C��l�Ƭ�1~49 (�}����) 
	do{  //���ư���}���{�� 
	srand((unsigned int)time(NULL));
	for(i=1;i<50;i++){  //�~�P�t��k 
			int ram=rand()%49+1;  //���@�H���ü�ram����1~49 
			temp=*(random+ram);  //�N �üư}�C��ram�� �s�� �Ȧs�ܼ� (�洫�B�J1) 
			*(random+ram)=*(random+i);  //�N �üư}�C��i�� �s�� �üư}�C��ram�� (�洫�B�J2) 
			*(random+i)=temp;  //�N �Ȧs�ܼ� �s�^ �üư}�C��i�� (�洫����) 
	}
	cout<<endl<<"�����A�諸�Ʀr���G";  //��X�ۿ����������r
	for(i=0;i<6;i++) cout<<setw(4)<<*(input+i);  //��X�ۿ���� 
	for(i=0;i<6;i++){  //��w�ƧǪk 
		for(j=0;j<5;j++){
			if(*(balls+j)>*(balls+j+1)){
				temp=*(balls+j);  //�N �}�X������j�� �s�J �Ȧs�ܼ�  (�洫�B�J1) 
				*(balls+j)=*(balls+j+1);  //�N �}�X������j�� �s�J �}�X������j+1��  (�洫�B�J2) 
				*(balls+j+1)=temp;  //�N �Ȧs�ܼ� �s�^ �üư}�C��i+1�� (�洫����) 
			}
		}
	}
	cout<<endl<<"�����}�X�������X�G";  //��X�}��������r 
	for(i=0;i<6;i++) cout<<setw(4)<<*(balls+i);  //��X���q���� 
	cout<<" �S�O���G"<<*spe<<endl;  //��X�S�O�� 
	lotto_check(input,balls,*spe,a,b);  //�i���� 
	cout<<endl<<"�O�_�~��}��(1)�O(2)�_:";  //�߰ݬO�_�~��}�� 
	cin>>c;  //��J�Ȧs�Jc 
	}while(c==1);  //��c=1�ɭ��ư���}���{�� 
	system("pause");  //�Ȱ��{�� 
}
