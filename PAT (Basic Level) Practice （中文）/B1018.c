/*PAT B1018
˼��
	- ���ⲻ�ѣ�������ͳ���䡢ƽ��ӮʱҪϸ��
*/
#include <stdio.h>
char max(int B,int C,int J){
	if(B>=C && B>=J) return 'B';
	if(C>B && C>=J) return 'C';
	return 'J';
}
int main(){
	int n,i;
	int a=0,b=0,c=0,a1=0,b1=0,c1=0,d=0;
	char T,F;
	scanf("%d",&n); //˫������Ĵ���
	for(i=0;i<n;i++){
		scanf(" %c %c",&T,&F); //�ס���˫��ͬʱ�����ĵ����ƣ���ע��ÿ%c֮ǰ�Ŀո� 
		if(T=='B'&&F=='C')	a++;
        if(T=='C'&&F=='J')	b++;
        if(T=='J'&&F=='B')	c++;
        if(T=='B'&&F=='J')	c1++;
        if(T=='C'&&F=='B')	a1++;
        if(T=='J'&&F=='C')	b1++;
        if(T==F)	d++;
	}
	printf("%d %d %d\n",a+b+c,d,a1+b1+c1); //�׵�ʤ��ƽ��������
	printf("%d %d %d\n",a1+b1+c1,d,a+b+c); //�ҵ�ʤ��ƽ��������
	printf("%c %c",max(a,b,c),max(a1,b1,c1)); //�ס��һ�ʤ������������ 
	return 0;
}


	 
