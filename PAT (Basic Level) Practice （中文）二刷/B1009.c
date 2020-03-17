/*PAT B1009
思考
	- 最后一个单词之后输出空格会导致格式错误
	- 用EOF来判断是否输入完毕 
*/ 
#include <stdio.h>
int main(){
	char a[80][80];
	int n=0,i; //n为单词的个数 
	while(scanf("%s",a[n])!=EOF){
		n++; 
	}
	for(i=n-1;i>=0;i--){ //逆序输出字符 
		printf("%s",a[i]);
		if(i>0) printf(" "); //最后一个字符不输出空格 
	}
	return 0;
} 
