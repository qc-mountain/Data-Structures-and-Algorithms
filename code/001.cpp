/* 构成三角形 */

#include <cstdio>
#include <algorithm>

using namespace std;

const int MAXN = 110;
int n, num[MAXN];

int main()
{
    int ans = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &num[i]);

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            for(int k = j + 1; k < n; ++k) {
                int len = num[i] + num[j] + num[k];
                int ma = max(num[i], max(num[j], num[k]));
                int rest = len - ma;

                if(ma < rest) {
                    ans = max(ans, len);
                    printf("%d\n", ans);
                }
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
