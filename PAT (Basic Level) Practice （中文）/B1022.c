/*PAT B1022
˼��
	- �ȼ���A+B�ĺ�sum,���ó���ȡ�෨ת��Ϊ���������
	- �ȶ���͵�������Ҫת���Ľ�����ȡ�ಢ�������飬�ٶ���Ҫת���Ľ��������ȡ�� 
	- ����������� 
*/
#include <stdio.h>
int main(){
	int A,B,m,cmp[100],i; //mΪҪת���Ľ����� 
	scanf("%d %d %d",&A,&B,&m);
	int sum=0,num=0;
	sum=A+B;
	do{ //ת��Ϊ������ 
		cmp[num++]=sum%m;
		sum=sum/m;
	}while(sum!=0);
	for(i=num-1;i>=0;i--){ //����������� 
		printf("%d",cmp[i]);
	} 
	printf("\n"); 
	return 0;
} 
