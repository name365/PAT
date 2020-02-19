/*PAT B1019/A1069 数字黑洞
思考
	- 步骤1:写两个函数:int型整数转换成int型数组的toarray函数(即把每一位都当成数
	  组的一个元素)》、int型数组转换成int型整数的tonumber函数。
	- 步骤2,建立一个while循环,对每一层循环:
		1. 用to_array函数将n转换为数组并递增排序,再用to_number函数将递增排序完的数组转换为整数MIN。
		2. 将数组递减排序,再用tonumber函数将递减排序完的数组转换为整数MAX。
		3. 令n=MAX-MIN为下一个数,并输出当前层的信息。
		4. 如果得到的n为0或6174,退出循环。
注意点
	- 如果采用其他写法,容易发生问题的是6174这个数据可能没有输出,实际上应该输出:7641-1467=6174
	- 如果某步得到了不足4位的数,则视为在高位补0,如189即为0189。
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

 
