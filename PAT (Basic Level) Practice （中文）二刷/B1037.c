/*PAT B1037在霍格沃茨找零钱
样例解释
- 样例1
	- 就Knut来说，需要找钱28-27=1；就Sickle来说,1-16不够减，于是兑换1个Galleon为17个Sickle，这样Sickle就变成1+17=18个，需要找钱18-16=2；就Galleon来说，由于之前被兑换了1个，因此只剩下13个，需要找钱13-10=3。

- 样例2
	- 在样例1的基础上加个负号即可。

思考
	- 根据题意可知,1个Galleon可以兑换17x29个Knut,1个Sickle可以兑换29个Knut，因此直接把货币全部转换成Knut来计算。
	- 于是第二个减去第一个即可得到要找的钱,假设为K。
	- 由于此时单位是Knut，因此若要转换为原来的格式,就有
	- K/(17x29)个Galleon，K%(17x29)129个Sickle，K%29个Knut。

注意点
	- 获得Knut为单位的找零的钱K后要将它取绝对值,不能直接把负数直接代入后面的运算。
*/
#include <stdio.h>
int main() {
    int Galleon, Sickle, Knut, P, A, change; 
    scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
    P = (Galleon * 17 + Sickle) * 29 + Knut; //价钱 
    scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
    A = (Galleon * 17 + Sickle) * 29 + Knut; //实付 
    change = A - P; 
    if (change < 0) {//钱不够 
        printf("-");
        change = -change;
    }
    printf("%d.%d.%d\n", change / 29 / 17, change / 29 % 17, change % 29);
    return 0;
}
 
