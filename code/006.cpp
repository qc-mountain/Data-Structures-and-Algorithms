#include <cstdio>
#include <cstring>

#define N 100000
bool primer[N];   //标记数组

int main()
{
    memset(primer, 1, sizeof(primer));

    primer[0] = primer[1] = 0;

    for(int i = 2; i <= N; i++) {
        if(!primer[i]) continue;  //当i为合数，则跳过，
        for(int j = i * 2; j <= N; j += i) //将合数标记为0
            primer[j] = 0;
    }

    for(int i = 0; i < N; i++)
        if(primer[i]) printf("%d ", i);  // 输出

    return 0;
}
