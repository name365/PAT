/*PAT A1032 Sharing
���� 
	-���������������׵�ַ�Լ����ɽ��ĵ�ַ�����ݡ���һ�����ĵ�ַ,������������
	�׸����ý��ĵ�ַ�������������û�й��ý��,�����1�� 
˼��
	- ���ڵ�ַ�ķ�Χ��С,��˿���ֱ���þ�̬����,����������Ŀ��Ҫ��,�ڽ���
	�ṹ�����ٶ���һ��int�ͱ���flag,��ʾ����Ƿ��ڵ�һ�������г���,����Ϊ1,����Ϊ-1��
	- ����Ŀ�����ĵ�һ���������׵�ַ����������һ������,�����������н���flagֵ��Ϊ1��
	
	- ������ö�ٵڶ�������,�����ֵ�һ��flagֵΪ1�Ľ��,˵���ǵ�һ�������г��ֹ�
	�Ľ��,��Ϊ���������ĵ�һ�����ý�㡣
	
	- ����ڶ�������ö������Ȼû�з��ֹ��ý��,�����1��
ע���
	- ʹ��%05d��ʽ�����ַ,����ʹ����5λ�������ĸ�λ��0��
	- ʹ��map���׳�ʱ��
	- scanfʹ��%c��ʽʱ�ǿ��Զ���ո��,����������ַ�����ݡ���̽���ַʱ,
	��ʽ����д��%d?%6c%6d,�������м�ӿո�
*/
#include <stdio.h> 
struct dode{
	char data;	//������
	int next;	//ָ����
	bool flag;	//����Ƿ��ڵ�һ�������г��� 
}node[100010];
int main(){
	for(int i=0;i < 100010;i++){
		node[i].flag = false;
	}
	int s1,s2,n;	//s1��s2�ֱ�Ϊ�����������׵�ַ 
	scanf("%d %d %d",&s1,&s2,&n);
	int address,next;	//����ַ����վ��ַ 
	char data;	//����
	for(int i=0;i<n;i++){
		scanf("%d %c %d",&address,&data,&next);
		node[address].data=data;
		node[address].next = next;
	} 
	int p;
	for(p=s1;p!=-1;p=node[p].next){
		node[p].flag = true;	//ö�ٵ�һ�����������н�㣬������ִ���Ϊ 1  
	}
	for(p=s2;p!=-1;p=node[p].next){
		if(node[p].flag == true)	break;	//����ҵ��ڵ�һ�������г��ֵĽ�� 
	}
	if(p != -1)	printf("%05d\n",p);
	else	printf("-1\n");
	return 0;
}