/*PTA B1020
题意
	- 现有月饼需求量为D,已知n种月饼各自的库存量和总售价,问如何销售这些月饼,使得可以获得的收益最大。求最大收益。
思路
	- 步骤1:这里采用“总是选择单价最高的月饼出售,可以获得最大的利涠“的策略。
	- 因此,对每种月饼,都根据其库存量和总售价来计算出该种月饼的单价。
	- 之后,将所有月饼按单价从高到低排序。
	- 步骤2:从单价高的月饼开始枚举。
		- 1.如果该种月饼的库存量不足以填补所有需求量,则将该种月饼全部卖出,此时需求量
			减少该种月饼的库存量大小,收益值增加该种月饼的总售价大小。
		- 2.如果该种月饼的库存量足够供应需求量,则只提供需求量大小的月饼,此时收益值增
			加当前需求量乘以该种月饼的单价,而需求量减为0.
		- 这样,最后得到的收益值即为所求的最大收益值。
	- 策略正确性的证明:假设有两种单价不同的月饼,其单价分别为a和b(a<b)。如果当
	  前需求量为K,那么两种月饼的总收入分别为aK与bK,而aK<bK显然成立,因此需要出
	  售单价更高的月饼。
注意点
	- 月饼库存量和总售价可以是浮点数(题目中只说是正数,没说是正整数）,需要用
	  double型存储。对于,总需求量D虽然题目说是正整数,但是为了后面计算方便,也需要定
	  义为浮点型。很多得到“答案错误“的代码都错在这里。
	- 当月饼库存量高于需求量时,不能先令需求量为0,然后再计算收益,这会导致该步收益为0。
	- 当月饼库存量高于需求量时,要记得将循环中断,否则会出错。
*/
#include <stdio.h>
typedef struct{
	double store; //库存量 
	double sell; //总售价
	double price; //单价 
}Moon;
int cmp( const void *a , const void *b ){  //按单价从高到低排序 
	Moon aa = *(Moon*)a;
	Moon bb = *(Moon*)b; 
	return bb.price > aa.price; 
} 
int main(){
	int i,N;
	double D,sum=0;
	Moon str[1010];
	scanf("%d %lf",&N,&D);
	for(i=0;i<N;i++){
		scanf("%lf",&str[i].store); //读入库存量 
	}
	for(i=0;i<N;i++){
		scanf("%lf",&str[i].sell); //读入总售价
		str[i].price = str[i].sell / str[i].store; //求出单价 
	}
	qsort(str,N,sizeof(Moon),cmp); //按单价从高到低排序
	for(i=0;i<N;i++){
		if(str[i].store <=D){ //如果需求量高于月饼库存量 
			D -= str[i].store;	//第i种月饼全卖出 
			sum += str[i].sell;	
		}else{
			sum += str[i].price*D; //只卖出剩余需求量的月饼
			break; 
		} 
	} 
	printf("%.2lf\n",sum);
	return 0;
}
