/*PAT A1032 Sharing
题意 
	-给出两条链表的首地址以及若干结点的地址、数据、下一个结点的地址,求两条链表的
	首个共用结点的地址。如果两条链表没有共用结点,则输出1。 
思考
	- 由于地址的范围很小,因此可以直接用静态链表,但是依照题目的要求,在结点的
	结构体中再定义一个int型变量flag,表示结点是否在第一条链表中出现,是则为1,不显为-1。
	- 由题目给出的第一条链表的首地址出发遍历第一条链表,将经过的所有结点的flag值赋为1。
	
	- 接下来枚举第二条链表,当出现第一个flag值为1的结点,说明是第一条链表中出现过
	的结果,即为两条链表的第一个共用结点。
	
	- 如果第二条链表枚举完仍然没有发现共用结点,则输出1。
注意点
	- 使用%05d格式输出地址,可以使不足5位的整数的高位补0。
	- 使用map容易超时。
	- scanf使用%c格式时是可以读入空格的,因此在输入地址、数据、后继结点地址时,
	格式不能写成%d?%6c%6d,必须在中间加空格。
*/
#include <stdio.h> 
struct dode{
	char data;	//数据域
	int next;	//指针域
	int flag;	//结点是否在第一条链表中出现 
}node[100010];
int main(){
	int i,s1,s2,n;	//s1、s2分别为两条链表的首地址 
	for(i=0;i < 100010;i++){
		node[i].flag = 0;
	}
	scanf("%d %d %d",&s1,&s2,&n);
	int address,next;	//结点地址与后继站地址 
	char data;	//数据
	for(i=0;i<n;i++){
		scanf("%d %c %d",&address,&data,&next);
		node[address].data=data;
		node[address].next = next;
	} 
	int p;
	for(p=s1;p!=-1;p=node[p].next){
		node[p].flag = 1;	//枚举第一条链表的所有结点，令其出现次数为 1  
	}
	for(p=s2;p!=-1;p=node[p].next){
		if(node[p].flag == 1)	break;	//如果找到在第一条链表中出现的结点 
	}
	if(p != -1)	printf("%05d\n",p);
	else	printf("-1\n");
	return 0;
}
