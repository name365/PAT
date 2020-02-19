/*1028
思考
	- 输入在第一行给出正整数 N(N<=100000)
	- 随后 N 行，每行给出 1 个人的姓名（由不超过 5 个英文字母组成的字符串）、
	- 以及按 yyyy/mm/dd（即年/月/日）格式给出的生日。
	- 题目保证最年长和最年轻的人没有并列。 
	- 顺序输出有效生日的个数、最年长人和最年轻人的姓名.
	- 今天是 2014 年 9 月 6 日，所以超过 200 岁的生日和未出生的生日都是不合理的，应该被过滤掉。
	- 直接以结构体存储、自定义字符串排序函数，按要求输入输出即可 
注意
	- 可能一个有效生日都没有，这时候直接输出0。 
*/
#include <stdio.h>
typedef struct census{
	char name[11]; //姓名
	char date[11]; //生日
}census;
int cmp(const void *a, const void *b){ //字符排序函数 
	census A= *(census*) a;
	census B= *(census*) b; 
	return strcmp(A.date,B.date);
}
int main(){
	int N,i,count=0;
	scanf("%d",&N);
	census str[100010];
	char names[11],dates[11];
	for(i=0;i<N;i++){
		scanf("%s %s",names,dates);
		if(strcmp(dates,"2014/09/06")<=0 && strcmp("1814/09/06",dates) <= 0){ //没有超过 200 岁的
			strcpy(str[count].name,names); //合法的名字存储到结构体 
			strcpy(str[count].date,dates); //合法的日期存储到结构体 
			count++; //计数 
		}
	}
	qsort(str,count,sizeof(str[0]),cmp);
	if(count)	printf("%d %s %s",count,str[0].name,str[count-1].name);
	else	printf("0"); //一个有效生日都没有
	return 0;
} 


