/*PAT B1038
思考：
	- 总体就是输入一个数，用数组进行计数统计，成绩相同累加，不同不累加
	- 末尾输出无空格
*/
#include <stdio.h>
int main(){
	int n,i,k,p,a[110]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		a[k]++; //成绩相同累加
	}
	scanf("%d",&p);
	for(i=0;i<p;i++){
		scanf("%d",&k);
		printf("%d",a[k]);
		if(i<p-1) printf(" "); //末尾输出无空格
	}
	return 0;
} 


 
