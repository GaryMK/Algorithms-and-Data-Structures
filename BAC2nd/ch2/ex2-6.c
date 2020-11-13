// exercise2-6 permutation
// Created by Gary on 2020/11/12.
//
#include<stdio.h>
int main()
{
    for(int i = 111; i < 333; i++)
    {
        int sum = 0,m[10] = {0};
        m[i/100] = 1;
        m[i/10%10] = 1;
        m[i%10] = 1;
        int j = i * 2;
        m[j/100] = 1;
        m[j/10%10] = 1;
        m[j%10] = 1;
        int k = i * 3;
        m[k/100] = 1;
        m[k/10%10] = 1;
        m[k%10] = 1;
        for(int n = 0; n < 10; n++)
            sum+=m[n];
        if (sum == 9)
            printf("%d %d %d \n", i, j, k);
    }
    return 0;
}
