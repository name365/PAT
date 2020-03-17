/*PAT B1032
思路：
	- 令数组school[10010]记录每个学校的总分，初始值为0.对每一个读入的学校schID与其对应的分数score,令school[schID]+=score。
	- 令变量k记录最高总分的学校编号，变量MAX记录最高总分，初值为-1。由于学校是连续编号的，因此美剧编号1~N，不断更新k与MAX即可。 
*/ 
#include <stdio.h>
int school[100010]={0}; //记录每个学校的总分 
int main(){
	int n,i,schID,score;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&schID,&score); //学校ID、分数 
		school[schID] += score; //学习schID的总分增加score 
	} 
	int k=1,MAX= -1; //总得分最高的学校的编号、及其总分 
	for(i=0;i<=n;i++){ //从所有学校中选出总分最高的一个 
		if(school[i]>MAX){
			MAX = school[i];
			k=i;
		}
	} 
	printf("%d %d\n",k,MAX); //输出总得分最高的学校的编号、及其总分 
	return 0;
}
