/*PAT B1011
思考
	- 若A+B>C，则输出Case #%lld: true ，其中%lld为当前的tcase的值
	- 否则，输出 Case #%lld: false， 其中%lld为当前的tcase的值 
*/
#include <stdio.h>
int main(){
	long long T,A,B,C,i; //区间[-231, 231]内的3个整数A、B和C
	scanf("%lld",&T);
	for(i=1;i<=T;i++){
		scanf("%lld %lld %lld",&A,&B,&C);
		long long k=A+B;
		if(k>C){
			printf("Case #%lld: true\n",i);
		}else{
			printf("Case #%lld: false\n",i);
		}
	}
	return 0;
}
 
