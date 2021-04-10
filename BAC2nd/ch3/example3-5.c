// example3-5 生成元 (Digit Generator, ACM/ICPC Seoul 2005, UVa1583)
// Created by Gary on 2021/4/10.
//
#include<stdio.h>
#include<string.h>
#define maxn 100005
int ans[maxn];

int main() {
    int T, n;
    memset(ans, 0, sizeof(ans));
    for (int m = 1; m < maxn; m++) {
        int x = m, y = m;
        while (x > 0) { y += x % 10; x /= 10;}
    }
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }
    return 0;
}