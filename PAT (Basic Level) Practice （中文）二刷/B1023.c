/*PTA B1023
思路
	- 用10个数字组成最小的数并输出，且 0 不能做首位。 
	- 先从1~9中选择个数不为0的最小的数输出,然后从0~9输出数字,每个数
	  守输出次数为其剩余个数。
	- 以样例为例,最高位为个数不为0的最小的数1,此后1的剩余个数减1(由2变为1)。
	- 接着按剩余次数(0剩余两个,1剩余一个,5出现三个,8出现一个)依次输出所有数。
	- 策略正确性的证明:首先,由于所有数字都必须参与组合,因此最后结果的位数是确定
	  的。然后,由于最高位不能为0,因此需要从[1,9]中选择最小的数输出(如果存在两个长度
	  相同的数的最高位不同,那么一定是最高位小的数更小)。最后,针对除最高位外的所有位,
	  也是从高位到低位优先选择[0,9]中还存在的最小的数输出
注意点
	- 由于第一位不能是0,因此第一个数字必须从1~9中选择最小的存在的数字,
	  且找到这样的数字之后要及时中断循环。
*/
#include <stdio.h> 
int main(){
	int i,j,count[10]; //记录数字0~9的个数
	for(i=0;i<10;i++){
		scanf("%d",&count[i]); 
	} 
	for(i=1;i<10;i++){
		if(count[i]>0){ //从1~9中选择count[i]中不为 0的最小的数 
			printf("%d",i);
			count[i]--;
			break; //找到一个后就中断 
		}
	}
	for(i=0;i<10;i++){ //从0~9中输出对应个数的数字 
		for(j=0;j<count[i];j++){
			printf("%d",i);
		}
	} 
	return 0;
}

