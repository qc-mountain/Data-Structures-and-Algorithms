/*
 * 部分和问题
 */

#include <cstdio>
#include <algorithm>

using namespace std;

const int MAXN = 30;
int n, k;
int num[MAXN];

int dfs(int i, int sum)
{
    if(i == n)
        return sum == k;

    if(dfs(i + 1, sum))
        return true;

    if(dfs(i + 1, sum + num[i]))
        return true;

    return false;
}

int main()
{
    while(~scanf("%d", &n)) {
        for(int i = 0; i < n; ++i)
            scanf("%d", &num[i]);
        scanf("%d", &k);

        if(dfs(0, 0)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
