/*B1004
思考
	- 用结构体记录学生的姓名、学号、成绩，用temp存放临时成绩、
	- max_ans存放最高分数学生，min_ans存放最低分数学生，并对其成绩分别初始化为-1和101 
	- 通过遍历存储判断即可得出答案 
*/
#include <stdio.h>
struct student{
	char name[15];
	char id[15];
	int score;
}temp,max_ans,min_ans; //temp存放临时成绩，max_ans为最高分成绩学生，min_ans为最低分成绩学生 
int main(){
	int n,i;
	max_ans.score=-1; //最高分初试成绩 
	min_ans.score=101; //最低分初始成绩101 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %s %d",temp.name,temp.id,&temp.score);
		if(temp.score>max_ans.score) max_ans=temp;
		if(temp.score<min_ans.score) min_ans=temp;
	}
	printf("%s %s\n",max_ans.name,max_ans.id);
	printf("%s %s\n",min_ans.name,min_ans.id);
	return 0;
}
