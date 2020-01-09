#include <iostream>
#include <iomanip>
using namespace std;



struct Student
{
  char chinese_name[8];
  int id_number;
  int ch_score,en_score,math_score,nr_score,soc_score;
};

app4(){
  int i,j,temp,Total[5],Rank[5];
  bool loop=true;
  Student class_A[5]={{"蔡伊林",105201,80,80,90,80,90},{"周杰輪",105202,80,60,50,60,60},{"蕭勁騰",105203,90,90,60,90,60},{"楊呈琳",105204,60,50,50,60,60},{"林依辰",105205,80,70,70,80,60}};
  cout<<"       ------學生原始成績單------"<<endl;
  cout<<setw(8)<<"姓名"<<setw(7)<<"學號";
  cout<<setw(6)<<"國文"<<setw(6)<<"英文"<<setw(6)<<"數學";
  cout<<setw(6)<<"自然"<<setw(6)<<"社會"<<endl;
  
  
  for(i=0;i<5;i++){
    Total[i]=class_A[i].ch_score+class_A[i].en_score+class_A[i].math_score+class_A[i].nr_score+class_A[i].soc_score;
    cout<<setw(8)<<class_A[i].chinese_name<<setw(7)<<class_A[i].id_number;
    cout<<setw(6)<<class_A[i].ch_score<<setw(6)<<class_A[i].en_score;
    cout<<setw(6)<<class_A[i].math_score<<setw(6)<<class_A[i].nr_score;
    cout<<setw(6)<<class_A[i].soc_score<<setw(6)<<endl;
  }
  for(i=0;i<5;i++){
    for(j=0;j<4;j++){
      if(Total[j+1]>Total[j]){
        temp=Total[j+1];
        Total[j+1]=Total[j];
        Total[j]=temp;
      }
    }
  }
  for (i=0;i<5;i++)
    for (j=0;j<5;j++)
      if (class_A[j].ch_score+class_A[j].en_score+class_A[j].math_score+class_A[j].nr_score+class_A[j].soc_score==Total[i]) Rank[j]=i+1;
	cout<<endl<<"     ------依總分排序後之成績單------"<<endl;
	cout<<setw(8)<<"姓名"<<setw(7)<<"學號";
	cout<<setw(6)<<"國文"<<setw(6)<<"英文"<<setw(6)<<"數學";
	cout<<setw(6)<<"自然"<<setw(6)<<"社會"<<setw(6)<<"總分";
	cout<<setw(6)<<"名次"<<endl;
	for (i=0;i<5;i++) {
		Total[i]=class_A[i].ch_score+class_A[i].en_score+class_A[i].math_score+class_A[i].nr_score+class_A[i].soc_score;
		cout<<setw(8)<<class_A[i].chinese_name<<setw(7)<<class_A[i].id_number;
		cout<<setw(6)<<class_A[i].ch_score<<setw(6)<<class_A[i].en_score;
		cout<<setw(6)<<class_A[i].math_score<<setw(6)<<class_A[i].nr_score;
		cout<<setw(6)<<class_A[i].soc_score<<setw(6)<<Total[i];
		cout<<setw(6)<<Rank[i]<<endl;
	}
  system("Pause");
}

