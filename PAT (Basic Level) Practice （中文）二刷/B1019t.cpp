/*PAT B1019/A1069 ���ֺڶ�
˼��
	- ����1:д��������:int������ת����int�������toarray����(����ÿһλ��������
	  ���һ��Ԫ��)��int������ת����int��������tonumber������
	- ����2,����һ��whileѭ��,��ÿһ��ѭ��:
		1. ��to_array������nת��Ϊ���鲢��������,����to_number���������������������ת��Ϊ����MIN��
		2. ������ݼ�����,����tonumber�������ݼ������������ת��Ϊ����MAX��
		3. ��n=MAX-MINΪ��һ����,�������ǰ�����Ϣ��
		4. ����õ���nΪ0��6174,�˳�ѭ����
ע���
	- �����������д��,���׷����������6174������ݿ���û�����,ʵ����Ӧ�����:7641-1467=6174
	- ���ĳ���õ��˲���4λ����,����Ϊ�ڸ�λ��0,��189��Ϊ0189��
*/
#include <cstdio>
#include <algorithm>
using namespace std;
int i;
bool cmp(int a,int b){ //�ݼ����� 
	return a>b;
}
void to_array(int n,int num[]){	//��n��ÿһλ�浽num������ 
	for(i=0;i<4;i++){
		num[i]=n%10;
		n/=10;
	}
} 
int to_number(int num[]){	//��num����ת��Ϊ���� 
	int sum=0;
	for(i=0;i<4;i++){
		sum=sum*10+num[i];
	} 
	return sum;
}
int main(){
	int n,MAX,MIN,str[5];
	scanf("%d",&n);
	while(1){
		to_array(n,str);	//��nת��Ϊ����
		sort(str,str+4);	//��num������Ԫ�ش�С��������
		MIN=to_number(str);	//��ȡ��Сֵ
		sort(str,str+4,cmp);	//��num������Ԫ�شӴ�С���� 
		MAX=to_number(str);	//��ȡ���ֵ 
		n=MAX-MIN;	//�õ���һ���� 
		printf("%04d - %04d = %04d\n",MAX,MIN,n);	//ע���ʽ 
		if(n==0||n==6174)	break; //����¸�����0��6174���˳� 
	}
	return 0;
}
