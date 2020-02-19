/*PAT B1001
读入题目给出的n，之后用while循环语句反复判段n是否为1
	- 如果n为1，则退出循环；
	- ruguon不为1，则判断n是否为偶数，如果是偶数，则令n除于2；则令n为（3*n+）/2，之后令计数器count加1；
	- 退出循环时，count值即为答案。*/
#include <stdio.h>
int main(){
	int n,count=0;
	scanf("%d",&n); //输入n 
	while(n!=1){ //循环判断n是否为1 
		if(n%2==0) n=n/2; //如果是偶数 
		else n=(3*n+1)/2; //如果是奇数 
		count++; //计数器加1 
	}
	printf("%d\n",count);
	return 0;
} 
