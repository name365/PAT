/*PAT A1059
˼��
	- ȫ���Ǹ���һ��int��Χ�����������մ�С�����˳�������ֽ�Ϊ�������ĳ˷���ʽ
	- ˼·��ֽ���������˼·��ȫ��ͬ��ֻ����ǰ���Ƚ��������ӡ�������ٽ��������ӷֽ�
ע��
	- ��Ŀ˵����int��Χ�ڵ����������������ӷֽ�,����������ſ�105��С�Ϳ�����
	- ע��nһ1��Ҫ���������l=1��,���򲻻���������
	- ��ѧ��ѧϰ�����������ӷֽ����׷���ĵط�:һ����main������ͷ���ǵ���
	Find_Prime0����;����Find_Prime0�����а�i<maxn��д��i��maxn;����û�д������
	sqrt(0)���ֵ�������:������ö�������ӵĹ����з�������ѭ��(�������;����û����ѭ
	���ⶨ��������洢sqrt(n),����ѭ��������ֱ�Ӽ���sqrt(n),������ѭ����ʹ��n�����
	�в����Ļ��ᵼ�´𰸴��� 
*/
#include <stdio.h>
#include <math.h>

typedef int bool;	//�Զ���bool 
#define false 0
#define true  1

struct factor{
	int x,cnt;	//xΪ�����ӣ�cnt Ϊ����� 
}fac[10]; 

bool isPrime(int n){	//�ж� n �Ƿ�Ϊ���� 
	if(n==1)	return false;
	int i,sqr = (int)sqrt(1.0*n);
	for(i=2;i<=sqr;i++){
		if(n%i==0)	return false;
	} 
	return true;	
} 

int prime[100010],pNum=0;
void Find_Prime(){	//�������� 
	int i;
	for(i=1;i<100010;i++){
		if(isPrime(i)==true){	//��������� 
			prime[pNum++] = i;	//��¼������ 
		}
	}
}

int main(){
	Find_Prime();
	int n,i,num=0;	//numΪn�Ĳ�ͬ�����Ӹ���
	scanf("%d",&n);
	if(n==1)	printf("1=1");
	else{
		printf("%d=",n);
		int sqr=(int)sqrt(1.0*n);	//n�ĸ���
		for(i=0;i<pNum && prime[i] <= sqr;i++){
			if(n%prime[i]==0){	//���prime[i]��n������ 
				fac[num].x=prime[i];	//��¼������
				fac[num].cnt=0;
				while(n%prime[i]==0){	//�����������prime[i]�ĸ��� 
					fac[num].cnt++;
					n /=prime[i];
				} 
				num++;	//��ͬ�����Ӹ����� 1  
			}
			if(n==1)	break;
		}
		if(n!=1){	//����޷������� n ���ڵ������ӳ��� 
			fac[num].x=n;	//��ôһ����һ�����ڸ���n�������� 
			fac[num++].cnt = 1; 
		}
		for(i=0;i<num;i++){	//����ʽ��� 
			if(i>0)	printf("*");
			printf("%d",fac[i].x);
			if(fac[i].cnt>1) {
				printf("^%d",fac[i].cnt);
			}
		}
	}
	return 0;
} 

 
