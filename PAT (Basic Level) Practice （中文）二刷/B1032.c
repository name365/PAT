/*PAT B1032
˼·��
	- ������school[10010]��¼ÿ��ѧУ���ܷ֣���ʼֵΪ0.��ÿһ�������ѧУschID�����Ӧ�ķ���score,��school[schID]+=score��
	- �����k��¼����ֵܷ�ѧУ��ţ�����MAX��¼����ܷ֣���ֵΪ-1������ѧУ��������ŵģ����������1~N�����ϸ���k��MAX���ɡ� 
*/ 
#include <stdio.h>
int school[100010]={0}; //��¼ÿ��ѧУ���ܷ� 
int main(){
	int n,i,schID,score;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&schID,&score); //ѧУID������ 
		school[schID] += score; //ѧϰschID���ܷ�����score 
	} 
	int k=1,MAX= -1; //�ܵ÷���ߵ�ѧУ�ı�š������ܷ� 
	for(i=0;i<=n;i++){ //������ѧУ��ѡ���ܷ���ߵ�һ�� 
		if(school[i]>MAX){
			MAX = school[i];
			k=i;
		}
	} 
	printf("%d %d\n",k,MAX); //����ܵ÷���ߵ�ѧУ�ı�š������ܷ� 
	return 0;
}
