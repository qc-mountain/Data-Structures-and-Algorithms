/*  ÂìÒÏ¹ıÇÅ  */

#include <cstdio>
#include <algorithm>

using namespace std;

const int MAXN = 1e6 + 10;
int len, n, ant[MAXN];

int main()
{
    int minT = 0, maxT = 0;
    scanf("%d%d", &len, &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &ant[i]);

    for(int i = 0; i < n; ++i) {
        minT = max(minT, min(ant[i], len - ant[i]));
    }

    for(int i = 0; i < n; ++i) {
        maxT = max(maxT, max(ant[i], len - ant[i]));
    }

    printf("%d %d\n", minT, maxT);
    return 0;
}
