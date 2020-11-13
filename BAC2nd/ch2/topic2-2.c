// topic2-2
// Created by Gary on 2020/11/13.
//
#include<stdio.h>
#include<math.h>
int main()
{
    double i;
    for(i = 0; fabs(i - 10) >= 1e-5; i += 0.1)
        printf("%.lf\n", i);
    printf("%.30lf\n", 0.1);//无法精确表示
    printf("%.30lf\n", 0.2);//无法精确表示
    printf("%.30lf\n", 0.25);//可以精确表示
    return 0;
}
