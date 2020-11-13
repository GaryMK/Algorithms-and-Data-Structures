// Task 1: 只修改第11行
// Task 2：只修改第10行
// Created by Gary on 2020/11/13.
//
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= 2 * n; i += 2)
        printf("%d\n", i); // printf("%d\n", 2 * i);
    return 0;
}