/*PAT B1009
˼��
	- ���һ������֮������ո�ᵼ�¸�ʽ����
	- ��EOF���ж��Ƿ�������� 
*/ 
#include <stdio.h>
int main(){
	char a[80][80];
	int n=0,i; //nΪ���ʵĸ��� 
	while(scanf("%s",a[n])!=EOF){
		n++; 
	}
	for(i=n-1;i>=0;i--){ //��������ַ� 
		printf("%s",a[i]);
		if(i>0) printf(" "); //���һ���ַ�������ո� 
	}
	return 0;
} 
