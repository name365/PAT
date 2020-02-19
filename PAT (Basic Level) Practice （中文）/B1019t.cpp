/*PAT B1019/A1069 数字黑洞
思考
	- 步骤1:写两个函数:int型整数转换成int型数组的toarray函数(即把每一位都当成数
	  组的一个元素)、int型数组转换成int型整数的tonumber函数。
	- 步骤2,建立一个while循环,对每一层循环:
		1. 用to_array函数将n转换为数组并递增排序,再用to_number函数将递增排序完的数组转换为整数MIN。
		2. 将数组递减排序,再用tonumber函数将递减排序完的数组转换为整数MAX。
		3. 令n=MAX-MIN为下一个数,并输出当前层的信息。
		4. 如果得到的n为0或6174,退出循环。
注意点
	- 如果采用其他写法,容易发生问题的是6174这个数据可能没有输出,实际上应该输出:7641-1467=6174
	- 如果某步得到了不足4位的数,则视为在高位补0,如189即为0189。
*/
#include <cstdio>
#include <algorithm>
using namespace std;
int i;
bool cmp(int a,int b){ //递减排序 
	return a>b;
}
void to_array(int n,int num[]){	//将n的每一位存到num数组中 
	for(i=0;i<4;i++){
		num[i]=n%10;
		n/=10;
	}
} 
int to_number(int num[]){	//将num数组转换为数字 
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
		to_array(n,str);	//将n转换为数组
		sort(str,str+4);	//对num数组中元素从小到大排序
		MIN=to_number(str);	//获取最小值
		sort(str,str+4,cmp);	//对num数组中元素从大到小排序 
		MAX=to_number(str);	//获取最大值 
		n=MAX-MIN;	//得到下一个数 
		printf("%04d - %04d = %04d\n",MAX,MIN,n);	//注意格式 
		if(n==0||n==6174)	break; //如果下个数是0或6174则退出 
	}
	return 0;
}
