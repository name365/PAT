/*PAT B1022
思考
	- 先计算A+B的和sum,再用除基取余法转换为进制数输出
	- 先对求和的数，用要转换的进制数取余并存入数组，再对其要转换的进制数相除取商 
	- 逆序输出数组 
*/
#include <stdio.h>
int main(){
	int A,B,m,cmp[100],i; //m为要转换的进制数 
	scanf("%d %d %d",&A,&B,&m);
	int sum=0,num=0;
	sum=A+B;
	do{ //转换为进制数 
		cmp[num++]=sum%m;
		sum=sum/m;
	}while(sum!=0);
	for(i=num-1;i>=0;i--){ //逆序输出数组 
		printf("%d",cmp[i]);
	} 
	printf("\n"); 
	return 0;
} 
