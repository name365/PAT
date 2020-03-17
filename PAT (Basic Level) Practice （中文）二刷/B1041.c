/*B1041
思考
	- 网上大多数使用的是结构体，但我读完题后，按题要求发现未必一定要结构体,
	- 在Dev-C++中输出不对，但能通过PTA考试机 emmmmmmm~ 
	- 只需要判断带查询的试机座位号与输入的试机座位号相等，则输出另外两个号码，跳出循环即可  
*/ 
#include <stdio.h>
int main(){
	int N,M,shi,i,j; //N个编号，M个待查寻号，shi是试机座位号 
	scanf("%d",&N);
	long long zhun[N],zuo[N],kao[N];
	for(i=0;i<N;i++){
		scanf("%lld %lld %lld",&zhun[i],&zuo[i],&kao[i]);
	} 
	scanf("%d",&M);
	for(i=0;i<M;i++){
		scanf("%d",&shi);
		for(j=0;j<N;j++){
			if(zuo[j]==shi){
				printf("%lld %lld\n",zhun[j],kao[j]);
				break;
			} 
		}
	}
	return 0;
} 
