// exercise2-4 subsequence
// Created by Gary on 2020/11/12.
//
#include<stdio.h>
int main()
{
    int n,m;
    while (scanf("%d%d", &n, &m) == 2 && (n || m))
    {
        double sum = 0;
        for (; n <= m ; n++) {
            sum += 1.0 / n / n;
        }
        printf("%.5f\n", sum);
    }
    return 0;
}

