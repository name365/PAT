/*PAT B1038
˼����
	- �����������һ��������������м���ͳ�ƣ��ɼ���ͬ�ۼӣ���ͬ���ۼ�
	- ĩβ����޿ո�
*/
#include <stdio.h>
int main(){
	int n,i,k,p,a[110]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		a[k]++; //�ɼ���ͬ�ۼ�
	}
	scanf("%d",&p);
	for(i=0;i<p;i++){
		scanf("%d",&k);
		printf("%d",a[k]);
		if(i<p-1) printf(" "); //ĩβ����޿ո�
	}
	return 0;
} 


 
