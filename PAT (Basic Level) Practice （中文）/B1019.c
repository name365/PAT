/*PAT B1019/A1069 ���ֺڶ�
˼��
	- ����1:д��������:int������ת����int�������toarray����(����ÿһλ��������
	  ���һ��Ԫ��)����int������ת����int��������tonumber������
	- ����2,����һ��whileѭ��,��ÿһ��ѭ��:
		1. ��to_array������nת��Ϊ���鲢��������,����to_number���������������������ת��Ϊ����MIN��
		2. ������ݼ�����,����tonumber�������ݼ������������ת��Ϊ����MAX��
		3. ��n=MAX-MINΪ��һ����,�������ǰ�����Ϣ��
		4. ����õ���nΪ0��6174,�˳�ѭ����
ע���
	- �����������д��,���׷����������6174������ݿ���û�����,ʵ����Ӧ�����:7641-1467=6174
	- ���ĳ���õ��˲���4λ����,����Ϊ�ڸ�λ��0,��189��Ϊ0189��
*/
#include <stdio.h>
int cap(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}
int stor(int n){
    int zoo[4] = {n/1000, n%1000/100, n%100/10, n%10};
    qsort(zoo, 4, sizeof(int), cap);
    return zoo[0] * 1000 + zoo[1] * 100 + zoo[2] * 10 + zoo[3];
}
int rever(int n){
    return n/1000 + n%1000/100 * 10 + n%100/10 * 100 + n%10 * 1000;
}
int main(){
    int n;
    scanf("%d", &n);
    do{
        n = stor(n);
        printf("%04d - %04d = %04d\n", n, rever(n), n - rever(n));
        n = n - rever(n);
    }while(n != 0 && n != 6174) ;
    return 0;
}

 
