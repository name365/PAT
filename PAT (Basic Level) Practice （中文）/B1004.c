/*B1004
˼��
	- �ýṹ���¼ѧ����������ѧ�š��ɼ�����temp�����ʱ�ɼ���
	- max_ans�����߷���ѧ����min_ans�����ͷ���ѧ����������ɼ��ֱ��ʼ��Ϊ-1��101 
	- ͨ�������洢�жϼ��ɵó��� 
*/
#include <stdio.h>
struct student{
	char name[15];
	char id[15];
	int score;
}temp,max_ans,min_ans; //temp�����ʱ�ɼ���max_ansΪ��߷ֳɼ�ѧ����min_ansΪ��ͷֳɼ�ѧ�� 
int main(){
	int n,i;
	max_ans.score=-1; //��߷ֳ��Գɼ� 
	min_ans.score=101; //��ͷֳ�ʼ�ɼ�101 
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
