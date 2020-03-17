/*PAT1036
思考：
	- 由于行数是列数的一半，因此当列数col是奇数时，行数col/2+1;
	- 当列数是偶数时，行数row就是col/2
	- 由此输出分三部分，第一行、第二行~row-1行，第row行
	- 第一行与第row行输出都是n个a,使用一层循环即可
	- 对于第row-1行的每一行需先输出一个a，然后输出col-2个空格，再输出一个a。 
	- 注意：整数除以2进行四舍五入的操作可以通过判断它是否为奇数解决。 
*/
#include <stdio.h>
int main(){
	int n,i,m,j; //行、列 
	char c;
	scanf("%d %c",&m,&c);
	if(m%2==1) n=m/2+1; //m为奇数，向上取整
	else n=m/2; //m为偶数 
	for(i=0;i<m;i++){ //第一行的字符 
		printf("%c",c); //m个字符 
	}
	printf("\n");
	for(i=2;i<n;i++){
		printf("%c",c); //每行的第一个字符 
		for(j=0;j<m-2;j++){
			printf(" "); //m-2个空格 
		}
		printf("%c\n",c); //每行的最后一个字符 
	}
	for(i=0;i<m;i++){ //最后一行的字符 
		printf("%c",c); //m个字符 
	}
	return 0;
} 
