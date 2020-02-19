/*B1008
思考
	- 需要注意M的值，不能认定 M<N ,需要在读入M,N后令 M=M%N，即 M<N ，
	- 这样使一个长为N的新序列，在右移N位后与原序列长度相同，
	- 这即可得到一个新M，可直接输出N-M号元素到N-1号元素，再输出0号元素到 N-M-1号元素即可 
	- 注意格式、运行超时 
*/
#include <stdio.h>
int main(){
	int N,M,i,str[100],num=0;
	scanf("%d %d",&N,&M);
	M=M%N; //修正m 
	for(i=0;i<N;i++){
		scanf("%d",&str[i]);
	}
	for(i=N-M;i<N;i++){ //输出 N-M到 N-1号元素 
		printf("%d",str[i]);
		num++; 
		if(num<N) printf(" ");
	}
	for(i=0;i<N-M;i++){ //输出 0 ~~ N-M-1 号元素 
		printf("%d",str[i]);
		num++;
		if(num<N) printf(" "); 
	} 
	return 0;
} 
