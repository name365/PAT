/*PAT A1025
����
	- ��n������,ÿ�����������������Ŀ��������ڸ������������п�����׼��֤�������,
	Ҫ�����п����������Ӹߵ�������,����˳��������п�����׼��֤�š��������������Լ�������������

˼·
	- �ڽṹ������Student�д����ĿҪ�����Ϣ(׼��֤�š��������������Լ�����������)��
	- ������ĿҪ��,��Ҫдһ��������cmp,��������:
		- ��������ͬʱ,�������Ӵ�С����
		- ����,��׼��֤�Ŵ�С��������
	- Ҳ��дһ��������������δ����cmp����:
	
	bool cmpt(Student a,Student b) {
		if(a.score != b.score)	return a.score > b.score;	//�Ȱ������Ӹߵ������� 
		else	return strcmp(a.id,b.id)<0;��//��������ͬ,��׼��֤�Ŵ�С��������
	}
	 
	- ���㷨�������Ϊ������������:
	1. �������������������Ϣ,���Ե�ǰ���뿼�������п�����������
	֮�󽫸ÿ��������п���������д�����ǵĽṹ���С�
	2. �����п����������� 
	3. ��˳��һ�߼���������,һ��������п�������Ϣ��

ע���
	- ��ͬһ�����Ŀ�����������ķ���:����int�ͱ���num,������ŵ�ǰ��ȡ���Ŀ�����
	����ÿ����һ����������Ϣ,����num��������������ȡ��һ�������Ŀ�����Ϣ(����ÿ�
	����k������)��,��������Ŀ�������Ӧ�������±��Ϊ����[num-k, num)��
*/ 
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef struct Student{
	char id[15]; //׼��֤�� 
	int score; //����
	int location_number; //������
	int local_rank; //�����ڵ����� 
}Student;
bool cmp(Student a, Student b) {
	if(a.score != b.score) return a.score>b.score; //�Ȱ������Ӹߵ�������
	else return strcmp(a.id,b.id) <0; //������ͬ��׼��֤�Ŵ�С�������� 
}
int main() {
    Student stu[30010];
    int n, k, num = 0; //numΪ�ܿ�����
    scanf("%d", &n); //nΪ������
    for(int i=1; i<=n; i++) {
        scanf("%d", &k); //�ÿ���������
        for(int j=0; j<k; j++) {
            scanf("%s %d", stu[num].id, &stu[num].score);
            stu[num].location_number = i; //�ÿ����Ŀ�����Ϊi
            num++; //�ܿ�������1 
        }   
		sort(stu+num-k,stu+num,cmp); //���ÿ����Ŀ�������
		stu[num-k].local_rank=1;
		for(int j=num-k+1;j<num;j++){
			if(stu[j].score==stu[j-1].score){ //�����ǰһλ����ͬ�� 
				stu[j].local_rank = stu[j-1].local_rank;
			}else{
				stu[j].local_rank=j+1-(num-k);
			} 
		} 
	}
	printf("%d\n",num); //����ܿ�����
	sort(stu,stu+num,cmp); //�����п�������
	int r=1;
	for(int i=0;i<num;i++){
		if(i>0&&stu[i].score != stu[i-1].score) r=i+1;
		printf("%s ",stu[i].id);
		printf("%d %d %d\n",r,stu[i].location_number,stu[i].local_rank);
	}
} 
