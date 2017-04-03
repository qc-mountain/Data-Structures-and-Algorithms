#include <cstdio>

using namespace std;

long long fact(int n) {  //½×³Ë
    if(n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int num[10000] = {0};   //ì³²¨ÄÇÆõ
long long fib(int n) {
    if(n <= 1) {
        return n;
    } else if (num[n]) {
        return num[n];
    } else {
        return num[n] = fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;

    while(~scanf("%d", &n)) {
        printf("%lld\n", fib(n));
    }

    return 0;
}
