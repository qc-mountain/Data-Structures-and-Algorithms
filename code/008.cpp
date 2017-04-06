/*
 * 贪心 区间问题
 */

#include <cstdio>
#include <algorithm>

using namespace std;

const int MAXN = 100000 + 10;

int n, s[MAXN], t[MAXN];
pair<int, int> itv[MAXN];

int main()
{
    while(~scanf("%d", &n)) {
        for(int i = 0; i < n; ++i)
            scanf("%d", &s[i]);
        for(int i = 0; i < n; ++i)
            scanf("%d", &t[i]);

        for(int i = 0; i < n; ++i) {
            itv[i].first = t[i];
            itv[i].second = s[i];
        }

        sort(itv, itv + n);

        int ans = 0, time = 0;
        for(int i = 0; i < n; ++i) {
            if(time < itv[i].second) {
                ans++;
                time = itv[i].first;
            }
        }

        printf("%d\n", ans);
    }
    return 0;
}
