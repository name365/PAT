/*PAT B1018
思考
	- 这题不难，但在于统计输、平、赢时要细心
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
	scanf("%d",&n); //双方交锋的次数
	for(i=0;i<n;i++){
		scanf(" %c %c",&T,&F); //甲、乙双方同时给出的的手势，请注意每%c之前的空格 
		if(T=='B'&&F=='C')	a++;
        if(T=='C'&&F=='J')	b++;
        if(T=='J'&&F=='B')	c++;
        if(T=='B'&&F=='J')	c1++;
        if(T=='C'&&F=='B')	a1++;
        if(T=='J'&&F=='C')	b1++;
        if(T==F)	d++;
	}
	printf("%d %d %d\n",a+b+c,d,a1+b1+c1); //甲的胜、平、负次数
	printf("%d %d %d\n",a1+b1+c1,d,a+b+c); //乙的胜、平、负次数
	printf("%c %c",max(a,b,c),max(a1,b1,c1)); //甲、乙获胜次数最多的手势 
	return 0;
}


	 
