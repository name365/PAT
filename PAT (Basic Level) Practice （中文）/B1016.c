/*PAT B1016
˼��
	- ��A��B����Ϊ�ַ�����ͨ��strlen()��������ȡ�ַ����ĳ���
	- �����ַ������ҵ���ͬ�ַ���ת��Ϊ���֣�������	
*/
#include <stdio.h>
int main(){
	char a[100],b[100];
	int d1,d2,i,p1=0,p2=0;
	scanf("%s %d %s %d",a,&d1,b,&d2); 
	for(i=0;i<strlen(a);i++){
		if(a[i]==d1+'0') 
			p1=p1*10+d1;
	}
	for(i=0;i<strlen(b);i++){
		if(b[i]==d2+'0') 
			p2=p2*10+d2;
	}
	printf("%d\n",p1+p2);
	return 0;
} 


	 
