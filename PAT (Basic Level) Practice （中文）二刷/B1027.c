/*PTA B1027
思考
	- 每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；
	- 符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。 
	- 输出图像，输出剩下没用掉的符号数。
	- 起初以常规思考先输出上部分，再输出下部分，但比较麻烦。
	- 之后通过查询函数，可以通过以绝对值函数控制输出 
	- 通过公式 m*m*2-1 确定需要的层数 
	- 再通过公式 m-1-abs(m-1-i) 控制空格输出，2*abs(m-1-i)+1 控制符号输出 
*/ 
#include <stdio.h>
#define abs(x) ((x) >= 0 ? (x):-(x))
int main(){
	int N,i,j,m; //m为层数 
	char c;
	scanf("%d %c",&N,&c);
	for(m=1;m*m*2-1<=N;m++); //确定层数 
	m--;
	for(i=0;i<2*m-1;i++){
		for(j=0;j<m-1-abs(m-1-i);j++) //控制空格
			putchar(' ');
		for(j=0;j<2*abs(m-1-i)+1;j++) //控制符号
			putchar(c);
		printf("\n");
	}
	printf("%d",N-2*m*m+1);
	return 0;
}  
