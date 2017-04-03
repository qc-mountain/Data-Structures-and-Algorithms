/*
 * ∞À¡¨Õ®
 */

#include <cstdio>
#include <algorithm>

using namespace std;

const int MAXN = 110;

int N, M;
char field[MAXN][MAXN];

void dfs(int x, int y)
{
    field[x][y] = '.';
    for(int dx = -1; dx <= 1; ++dx) {
        for(int dy = -1; dy <= 1; ++dy) {
            int nx = x + dx, ny = y + dy;
            if(nx >= 0 && nx < N && ny >= 0 && ny < M && field[nx][ny] == 'W') {
                dfs(nx, ny);
            }
        }
    }
    return ;
}

int main()
{
    while(~scanf("%d%d", &N, &M)) {
        for(int i = 0; i < N; ++i)
            scanf("%s", field[i]);
        int res = 0;
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < M; ++j) {
                if(field[i][j] == 'W') {
                    dfs(i, j);
                    res++;
                    printf("%d %d\n", i, j);
                }
            }
        }
        printf("%d\n", res);
    }
    return 0;
}
/*
W........WW.
.WWW.....WWW
....WW...WW.
.........WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.
*/
