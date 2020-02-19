/*PAT B1012
思考
	- 不难，但很坑。
	- 一开始错了一个用例，看网友分享才发现坑点，
	- a2交错和为0，不代表不存在，故还是要统计a2的数量的。 
*/
#include <stdio.h>
int main(){
	int N,i;
	while(scanf("%d",&N)!=EOF){
		int a1=0,a2=0,a21=0,a3=0,a4=0,a41=0,a5=0,num,re = 1;
		for(i=0;i<N;i++){
			scanf("%d",&num);
			if(num%10==0) a1+=num; //能被5整除的数字中所有偶数的和
			if(num%5==1){ //将被5除后余1的数字按给出顺序进行交错求和 
                a21++;
				if(a21%2==1) a2 += num; //奇数个相加 
				else a2 -= num; //偶数个相减 
			}
			if(num%5==2) a3++;
			if(num%5==3){
				a4 += num; //A4求合 
				a41++; //计数 
			}
			if(num%5==4){
				if(num>a5) a5=num;
			}
		}
		if(a1) {printf("%d ",a1);} else {printf("N ");}
    	if(a21) {printf("%d ",a2);} else {printf("N ");} //判断a21,坑点！！
    	if(a3) {printf("%d ",a3);} else {printf("N ");}
    	if(a41) {printf("%.1lf ",(double)a4/a41);} else {printf("N ");}
    	if(a5) {printf("%d\n",a5);} else {printf("N\n");}
	}
	return 0;
}
 
