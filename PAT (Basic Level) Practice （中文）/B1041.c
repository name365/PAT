/*B1041
˼��
	- ���ϴ����ʹ�õ��ǽṹ�壬���Ҷ�����󣬰���Ҫ����δ��һ��Ҫ�ṹ��,
	- ��Dev-C++��������ԣ�����ͨ��PTA���Ի� emmmmmmm~ 
	- ֻ��Ҫ�жϴ���ѯ���Ի���λ����������Ի���λ����ȣ�����������������룬����ѭ������  
*/ 
#include <stdio.h>
int main(){
	int N,M,shi,i,j; //N����ţ�M������Ѱ�ţ�shi���Ի���λ�� 
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
