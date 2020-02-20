/*PAT A1025
题意
	- 有n个考场,每个考场有若干数量的考生。现在给出各个考场中考生的准考证号与分数,
	要求将所有考生按分数从高到低排序,并按顺序输出所有考生的准考证号、排名、考场号以及考场内排名。

思路
	- 在结构体类型Student中存放题目要求的信息(准考证号、分数、考场号以及考场内排名)。
	- 根据题目要求,需要写一个排序函数cmp,规则如下:
		- 当分数不同时,按分数从大到小排序。
		- 否则,按准考证号从小到大排序。
	- 也即写一个类似于下面这段代码的cmp函数:
	
	bool cmpt(Student a,Student b) {
		if(a.score != b.score)	return a.score > b.score;	//先按分数从高到低排序 
		else	return strcmp(a.id,b.id)<0;ˇ//若分数相同,则按准考证号从小到大排序
	}
	 
	- 而算法本体则分为下面三个部分:
	1. 按考场读入各考生的信息,并对当前读入考场的所有考生进行排序。
	之后将该考场的所有考生的排名写入他们的结构体中。
	2. 对所有考生进行排序。 
	3. 按顺序一边计算总排名,一边输出所有考生的信息。

注意点
	- 对同一考场的考生单独排序的方法:定义int型变量num,用来存放当前获取到的考生人
	数。每读入一个考生的信息,就让num自增。这样当读取完一个考场的考生信息(假设该考
	场有k个考生)后,这个考场的考生所对应的数组下标便为区间[num-k, num)。
*/ 
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef struct Student{
	char id[15]; //准考证号 
	int score; //分数
	int location_number; //考场号
	int local_rank; //考场内的排名 
}Student;
bool cmp(Student a, Student b) {
	if(a.score != b.score) return a.score>b.score; //先按分数从高到低排序
	else return strcmp(a.id,b.id) <0; //分数相同按准考证号从小到大排序 
}
int main() {
    Student stu[30010];
    int n, k, num = 0; //num为总考生数
    scanf("%d", &n); //n为考场数
    for(int i=1; i<=n; i++) {
        scanf("%d", &k); //该考场内人数
        for(int j=0; j<k; j++) {
            scanf("%s %d", stu[num].id, &stu[num].score);
            stu[num].location_number = i; //该考生的考场号为i
            num++; //总考生数加1 
        }   
		sort(stu+num-k,stu+num,cmp); //将该考场的考生排序
		stu[num-k].local_rank=1;
		for(int j=num-k+1;j<num;j++){
			if(stu[j].score==stu[j-1].score){ //如果与前一位考生同分 
				stu[j].local_rank = stu[j-1].local_rank;
			}else{
				stu[j].local_rank=j+1-(num-k);
			} 
		} 
	}
	printf("%d\n",num); //输出总考生数
	sort(stu,stu+num,cmp); //将所有考生排序
	int r=1;
	for(int i=0;i<num;i++){
		if(i>0&&stu[i].score != stu[i-1].score) r=i+1;
		printf("%s ",stu[i].id);
		printf("%d %d %d\n",r,stu[i].location_number,stu[i].local_rank);
	}
} 
