/*1028
˼��
	- �����ڵ�һ�и��������� N(N<=100000)
	- ��� N �У�ÿ�и��� 1 ���˵��������ɲ����� 5 ��Ӣ����ĸ��ɵ��ַ�������
	- �Լ��� yyyy/mm/dd������/��/�գ���ʽ���������ա�
	- ��Ŀ��֤���곤�����������û�в��С� 
	- ˳�������Ч���յĸ��������곤�˺��������˵�����.
	- ������ 2014 �� 9 �� 6 �գ����Գ��� 200 ������պ�δ���������ն��ǲ�����ģ�Ӧ�ñ����˵���
	- ֱ���Խṹ��洢���Զ����ַ�������������Ҫ������������� 
ע��
	- ����һ����Ч���ն�û�У���ʱ��ֱ�����0�� 
*/
#include <stdio.h>
typedef struct census{
	char name[11]; //����
	char date[11]; //����
}census;
int cmp(const void *a, const void *b){ //�ַ������� 
	census A= *(census*) a;
	census B= *(census*) b; 
	return strcmp(A.date,B.date);
}
int main(){
	int N,i,count=0;
	scanf("%d",&N);
	census str[100010];
	char names[11],dates[11];
	for(i=0;i<N;i++){
		scanf("%s %s",names,dates);
		if(strcmp(dates,"2014/09/06")<=0 && strcmp("1814/09/06",dates) <= 0){ //û�г��� 200 ���
			strcpy(str[count].name,names); //�Ϸ������ִ洢���ṹ�� 
			strcpy(str[count].date,dates); //�Ϸ������ڴ洢���ṹ�� 
			count++; //���� 
		}
	}
	qsort(str,count,sizeof(str[0]),cmp);
	if(count)	printf("%d %s %s",count,str[0].name,str[count-1].name);
	else	printf("0"); //һ����Ч���ն�û��
	return 0;
} 


