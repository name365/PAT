/*PAT B1012
˼��
	- ���ѣ����ܿӡ�
	- һ��ʼ����һ�������������ѷ���ŷ��ֿӵ㣬
	- a2�����Ϊ0�����������ڣ��ʻ���Ҫͳ��a2�������ġ� 
*/
#include <stdio.h>
int main(){
	int N,i;
	while(scanf("%d",&N)!=EOF){
		int a1=0,a2=0,a21=0,a3=0,a4=0,a41=0,a5=0,num,re = 1;
		for(i=0;i<N;i++){
			scanf("%d",&num);
			if(num%10==0) a1+=num; //�ܱ�5����������������ż���ĺ�
			if(num%5==1){ //����5������1�����ְ�����˳����н������ 
                a21++;
				if(a21%2==1) a2 += num; //��������� 
				else a2 -= num; //ż������� 
			}
			if(num%5==2) a3++;
			if(num%5==3){
				a4 += num; //A4��� 
				a41++; //���� 
			}
			if(num%5==4){
				if(num>a5) a5=num;
			}
		}
		if(a1) {printf("%d ",a1);} else {printf("N ");}
    	if(a21) {printf("%d ",a2);} else {printf("N ");} //�ж�a21,�ӵ㣡��
    	if(a3) {printf("%d ",a3);} else {printf("N ");}
    	if(a41) {printf("%.1lf ",(double)a4/a41);} else {printf("N ");}
    	if(a5) {printf("%d\n",a5);} else {printf("N\n");}
	}
	return 0;
}
 
