/*PAT B1037�ڻ����ִ�����Ǯ
��������
- ����1
	- ��Knut��˵����Ҫ��Ǯ28-27=1����Sickle��˵,1-16�����������Ƕһ�1��GalleonΪ17��Sickle������Sickle�ͱ��1+17=18������Ҫ��Ǯ18-16=2����Galleon��˵������֮ǰ���һ���1�������ֻʣ��13������Ҫ��Ǯ13-10=3��

- ����2
	- ������1�Ļ����ϼӸ����ż��ɡ�

˼��
	- ���������֪,1��Galleon���Զһ�17x29��Knut,1��Sickle���Զһ�29��Knut�����ֱ�Ӱѻ���ȫ��ת����Knut�����㡣
	- ���ǵڶ�����ȥ��һ�����ɵõ�Ҫ�ҵ�Ǯ,����ΪK��
	- ���ڴ�ʱ��λ��Knut�������Ҫת��Ϊԭ���ĸ�ʽ,����
	- K/(17x29)��Galleon��K%(17x29)129��Sickle��K%29��Knut��

ע���
	- ���KnutΪ��λ�������ǮK��Ҫ����ȡ����ֵ,����ֱ�ӰѸ���ֱ�Ӵ����������㡣
*/
#include <stdio.h>
int main() {
    int Galleon, Sickle, Knut, P, A, change; 
    scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
    P = (Galleon * 17 + Sickle) * 29 + Knut; //��Ǯ 
    scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
    A = (Galleon * 17 + Sickle) * 29 + Knut; //ʵ�� 
    change = A - P; 
    if (change < 0) {//Ǯ���� 
        printf("-");
        change = -change;
    }
    printf("%d.%d.%d\n", change / 29 / 17, change / 29 % 17, change % 29);
    return 0;
}
 
