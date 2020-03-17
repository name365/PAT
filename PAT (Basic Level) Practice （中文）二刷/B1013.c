/*PAT B1013 ——筛法求解
思考
	- 先给出两个正整数 M，N，输出第 M 个素数到第 N 个素数之间的所有素数，M<=N<=10^4 
	- 把素数表打至第N个素数，按格式输出。
注意	
	1. 用筛法或者非筛法都可以解决该题,在算法中只需要添加一句控制素数个数的语可:
	if(pNum>=n)	break;
	这是由于题目只要求输出第m~n个素数,因此超过n个素数之后的就不用保存了。
	2. 小技巧:由于空格在测试时肉眼看不出来,因此如果提交返回“格式错误“,读者可
	以把程序中的空格改成其他符号(比如#)来输出,看看是哪里多了空格。
	3. 考虑到不知道第10^4个素数有多大,不妨将测试上限maxn设置得大一些,反正在素
	数个数超过n时是会中断的,不影响复杂度.当然也可以先用程序测试下第10^4个素数是多少,
	然后再用这个数作为上限。
	4. 本题在素数表生成过程中其实就可以直接输出,不过看起来会显得比较冗乱,因此还
	是应先生成完整素数表,然后再按格式要求输出。
	5. Find_Prime0函数中要记得是i<maxn而不是i<=maxn,否则程序一运行就会崩溃;
	在main函数中要记得调用Find_Prime0)函数,否则不会出结果。
*/
#include <stdio.h>
typedef int bool;	//自定义bool 
#define false 0
#define true  1
int prime[1000001],pNum=0;	//prime数组存放数组,pNum为素数个数 
bool p[1000001]={0};	//如果i为素数，p[i]为false;否则为true 
void Find_Prime(int n){
	int i,j;
	for(i=2;i<1000001;i++){
		if(p[i]==false){
			prime[pNum++] = i;
			if(pNum >= n)	break;	//只需要 n 个素数，超过即可结束 ,核心！！ 
			for(j=i+i;j<1000001;j+=i){
				p[j]=true;
			}
		}
	}
}
int main(){
	int M,N,i,count=0;
	scanf("%d %d",&M,&N); 
	Find_Prime(N);
	for(i=M;i<=N;i++){
		printf("%d",prime[i-1]);	//下标从 0 开始
		count++; 
		if(count%10!=0 && i<N)	printf(" ");	//每行10个，行末无多余空格 
		else	printf("\n");
	}
	return 0;
} 
 
