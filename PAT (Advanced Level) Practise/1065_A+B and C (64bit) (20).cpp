#define _CRT_SECURE_NO_DEPRECATE
#define _SECURE_SCL 0
#pragma comment(linker, "/STACK:66777216")
#include <algorithm>
#include <string>
#include <complex>
#include <cassert>
#include <memory>
#include <set>
#include <stack>
#include <map>
#include <list>
#include <deque>
#include <numeric>
#include <cctype>
#include <cstddef>
#include <vector>
#include <queue>
#include <iostream>
#include <iomanip>
#include <iterator>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <ctime>
#include <cstring>
#include <functional>
#include <bitset>
using namespace std;
 
#if defined(_MSC_VER) || defined(__BORLANDC__)
    typedef unsigned __int64 uint64;
    typedef signed __int64 int64;
#else
    typedef unsigned long long uint64;
    typedef signed long long int64;
#endif
typedef vector<int> VI;
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef pair<int64,int64> PLL;
typedef vector<int64> VL;
 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define pii pair<int,int>
#define pdd pair<double,double>
#define FOR(i,a,b) for (int _n(b), i(a); i <= _n; i++)
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;i--)
#define all(c) (c).begin(), (c).end()
#define SORT(c) sort(all(c))
#define REP(i,n) FOR(i,1,(n))
#define REPT(i,n) FOR(i,0,(n)-1)
#define L(s) (int)((s).size())
#define C(a) memset((a),0,sizeof(a))
#define IOS ios::sync_with_stdio(false)
 
const double pi = 3.1415926535897932384626433832795028841971;
const double EPS = 1E-9;
const int64 INF64 = (int64)1E18;
const int INF = 1000000000;
 
static inline bool get(int &v)
{
    int s = 1, c;
    while(!isdigit(c = getchar())&&c != '-')
    {
        if(c == EOF)
            break ;
    }
    if(c == EOF) return 0;
    if(c == '-') s = 0 , v = 0;
    else v = c^48;
    for(;isdigit(c = getchar());v = (v << 1) + (v << 3) + (c ^ 48));
    v = (s ? v : -v);
    return 1 ;
}

void run()
{
	int n, Cas = 1;
	int64 a, b, c;
	get(n);
	while (n--)
	{
		cin >> a >> b >> c;
		bool ok = false;
		if (c >= 0)
		{
			if ( a >= 0 && b >= 0 )
			{
				if (a > c - b)	ok = true;
			}
			else if( a <= 0 && b <= 0 )	ok = false;
			else
			{
				if ( a+b > c )	ok = true;
			}
		}
		else if ( c < 0 )
		{
			if ( a<=0 && b <= 0)	
			{
				if(a > -b+c)	ok = true;
			}
			else if( a >= 0 && b >= 0)	ok = true;
			else
			{
				if( a+b > c )	ok = true;
			}
		}
		printf("Case #%d: %s\n", Cas++, ok ? "true" : "false");
	}
}
 
 
int main()
{
#ifdef __DEBUG__
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    time_t st = clock();
#endif
    run();
#ifdef __DEBUG__
    printf( "\n=============\n");
    printf("Time: %.2lf sec\n",(clock()-st)/double(CLOCKS_PER_SEC));
#endif
    return 0;
}
