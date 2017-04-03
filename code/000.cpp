#include <stack>
#include <queue>
#include <cstdio>
#include <algorithm>

using namespace std;

void stack_test()
{
    int n;
    stack<int> num;
    while(~scanf("%d", &n)) {
        num.push(n);
    }

    while(!num.empty()) {
        printf("%d", num.top());
        num.pop();
    }
}

void queue_test()
{
    int n;
    queue<int> num;
    while(~scanf("%d", &n)) {
        num.push(n);
    }

    while(!num.empty()) {
        printf("%d ", num.front());
        num.pop();
    }
}

int main()
{
    queue_test();
    return 0;
}
