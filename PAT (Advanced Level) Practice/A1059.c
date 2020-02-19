/*PAT A1059
思考
	- 全题是给出一个int范围的整数，按照从小到大的顺序输出其分解为质因数的乘法算式
	- 思路与分解质因数的思路完全相同，只需在前面先将素数表打印出来，再进行质因子分解
注意
	- 题目说的是int范围内的正整数进行质因子分解,因此素数表大概开105大小就可以了
	- 注意n一1需要特判输出“l=1“,否则不会输出结果。
	- 初学者学习素数和质因子分解容易犯错的地方:一是在main函数开头忘记调用
	Find_Prime0函数;二是Find_Prime0函数中把i<maxn误写成i人maxn;万是没有处理大于
	sqrt(0)部分的质因子:四是在枚举质因子的过程中发生了死循环(死因各异;五是没有在循
	环外定义变量来存储sqrt(n),而在循环条件中直接计算sqrt(n),这样当循环中使用n本身进
	行操作的话会导致答案错误。 
*/
#include <stdio.h>
#include <math.h>

typedef int bool;	//自定义bool 
#define false 0
#define true  1

struct factor{
	int x,cnt;	//x为质因子，cnt 为其个数 
}fac[10]; 

bool isPrime(int n){	//判断 n 是否为素数 
	if(n==1)	return false;
	int i,sqr = (int)sqrt(1.0*n);
	for(i=2;i<=sqr;i++){
		if(n%i==0)	return false;
	} 
	return true;	
} 

int prime[100010],pNum=0;
void Find_Prime(){	//求素数表 
	int i;
	for(i=1;i<100010;i++){
		if(isPrime(i)==true){	//如果是素数 
			prime[pNum++] = i;	//记录到数组 
		}
	}
}

int main(){
	Find_Prime();
	int n,i,num=0;	//num为n的不同质因子个数
	scanf("%d",&n);
	if(n==1)	printf("1=1");
	else{
		printf("%d=",n);
		int sqr=(int)sqrt(1.0*n);	//n的根号
		for(i=0;i<pNum && prime[i] <= sqr;i++){
			if(n%prime[i]==0){	//如果prime[i]是n的因子 
				fac[num].x=prime[i];	//记录该因子
				fac[num].cnt=0;
				while(n%prime[i]==0){	//计算出质因子prime[i]的个数 
					fac[num].cnt++;
					n /=prime[i];
				} 
				num++;	//不同质因子个数加 1  
			}
			if(n==1)	break;
		}
		if(n!=1){	//如果无法被根号 n 以内的质因子除尽 
			fac[num].x=n;	//那么一定有一个大于根号n的质因子 
			fac[num++].cnt = 1; 
		}
		for(i=0;i<num;i++){	//按格式输出 
			if(i>0)	printf("*");
			printf("%d",fac[i].x);
			if(fac[i].cnt>1) {
				printf("^%d",fac[i].cnt);
			}
		}
	}
	return 0;
} 

 
