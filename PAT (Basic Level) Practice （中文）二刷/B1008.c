/*B1008
˼��
	- ��Ҫע��M��ֵ�������϶� M<N ,��Ҫ�ڶ���M,N���� M=M%N���� M<N ��
	- ����ʹһ����ΪN�������У�������Nλ����ԭ���г�����ͬ��
	- �⼴�ɵõ�һ����M����ֱ�����N-M��Ԫ�ص�N-1��Ԫ�أ������0��Ԫ�ص� N-M-1��Ԫ�ؼ��� 
	- ע���ʽ�����г�ʱ 
*/
#include <stdio.h>
int main(){
	int N,M,i,str[100],num=0;
	scanf("%d %d",&N,&M);
	M=M%N; //����m 
	for(i=0;i<N;i++){
		scanf("%d",&str[i]);
	}
	for(i=N-M;i<N;i++){ //��� N-M�� N-1��Ԫ�� 
		printf("%d",str[i]);
		num++; 
		if(num<N) printf(" ");
	}
	for(i=0;i<N-M;i++){ //��� 0 ~~ N-M-1 ��Ԫ�� 
		printf("%d",str[i]);
		num++;
		if(num<N) printf(" "); 
	} 
	return 0;
} 
