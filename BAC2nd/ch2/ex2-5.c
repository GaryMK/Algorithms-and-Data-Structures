// exercise2-5 decimal
// Created by Gary on 2020/11/12.
//
#include<stdio.h>
int main()
{
    int a, b, c, times = 0;
    while(scanf("%d%d%d", &a, &b, &c) == 3 && (a || b || c))
    {
        // Method 1: double精度16位，c大于16以后出错
        /*
        double result = 1.0 * a / b;
        times++;
        printf("Case %d: %.*f\n", times, c , result);
        */

        // Method 2:
        int n, m; // n是整数部分，m是小数部分
        n = a / b;
        m = a % b;
        times++;
        printf("Case %d: %d.", times, n);
        for(int i = 0; i < c; i++)
        {
            m *= 10;
            n = m / b;
            m = m % b;
            if (i != c - 1)
                printf("%d", n);
        }
        if (m * 10 / b > 5)
            n++;
        printf("%d\n", n);

    }
    return 0;
}
