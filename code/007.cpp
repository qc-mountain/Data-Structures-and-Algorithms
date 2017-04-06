/*
 * 硬币问题， 算出最少的硬币
 */

#include <cstdio>
#include <algorithm>

using namespace std;

const int val[] = {1, 5, 10, 50, 100, 500};
int sum[10];

int main()
{
    int ans = 0, value = 0;

    scanf("%d", &value);

    for(int i = 0; i <= 5; ++i)
        scanf("%d", &sum[i]);

    for(int i = 5; i >= 0; --i) {
        int cnt = min(value / val[i], sum[i]);
        value -= cnt * val[i];
        ans += cnt;
    }

    printf("%d\n", ans);
    return 0;
}
