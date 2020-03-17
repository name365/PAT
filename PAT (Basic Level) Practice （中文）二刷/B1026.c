/*1026
思考
	- 题意为给出C1和C2，单位均为CLK_TCK(100CLK_TCK=1s),求C1与C2相距的时间，结果按四舍五入精确到秒
	- 先求C2-C1，进行四舍五入求解 ,结果为ans 
	- 由于1h=3600s ,ans/3600即为小时数。于是ans%3600是求小时数后的剩余部分，再除以60即分钟数，ans模上60即为秒
	- 四舍五入可用math.h头文件的round函数，输出的不足两位，高用零补齐 
*/
#include <stdio.h>
int main(){
	int C1,C2,ans=0;
	scanf("%d %d",&C1,&C2);
	ans=C2-C1; //按题目要求求差
	if(ans%100>=50){ //四舍五入 
		ans=ans/100+1;
	}else{
		ans=ans/100;
	}	
	printf("%02d:%02d:%02d\n",ans/3600,ans%3600/60,ans%60); 
	return 0;
} 
