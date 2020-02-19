/*PAT B1006换个格式输出整数
思考
	- 步骤1:考虑到需要从高位到低位进行枚举,因此不妨先将n的每一位存到数组中。
	- 令int型ans数组存放h的每一位,num表示n的位数。
	- 步骤2：对ans数组从高位到低位枚举：
	- 如果是百位，则输出该位数字的个数的‘B’。
	- 如果是十位，则输出该位数守的个数的‘S’。
	- 如果是个位，则输出从1到该位数字。
*/
#include<stdio.h> 
int main(){   
    int N,i;
    scanf("%d",&N);
    int B = N/100;	//存储百位
    if(B != 0) {	//输出B个B
        for(i = 0;i < B;i++) printf("B"); 
    }
    int S = N % 100 / 10;	//存储十位
    if(S != 0) {
        for(i = 0;i < S;i++) printf("S"); 
    } 
    int G = N % 10;	//存储个位
    for(i=1;i<=G;i++) printf("%d",i);
    return 0;
 } 

