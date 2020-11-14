// example3-1 Tex Quotes, UVa 272
// Created by Gary on 2020/11/14.
//
#include<stdio.h>
int main()
{
    int count = 0;
    printf("%d %d %d\n", count++, count++, count++);
    count = count++;
    printf("%d", count);
    return 0;
}
