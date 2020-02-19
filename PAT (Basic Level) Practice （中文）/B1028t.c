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
int main() {
    int N, count=0,i;
    char str[17], max[17] = {'9'}, min[17] = {'0'};
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%s %s", str + 11, str);
        if(strcmp(str, "1814/09/06") >= 0 && strcmp(str, "2014/09/06") <= 0) {
            if(strcmp(str, max) <= 0)
            memcpy(max, str, 17);
            if(strcmp(str, min) >= 0)
            memcpy(min, str, 17);
            count++;
        }
    }
    if(count)    printf("%d %s %s", count, max + 11, min + 11);
    else    printf("0");
    return 0;
}



