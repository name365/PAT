/*PAT B1016
思考
	- 将A，B定义为字符串，通过strlen()函数，获取字符串的长度
	- 遍历字符串，找到相同字符，转换为数字，最后求和	
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


	 
