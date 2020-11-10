//
// Created by Gary on 2020/11/8.
//
#include<stdio.h>
#include<math.h>
int main()
{
    // A1
    printf("%d\n", sizeof(int));
    printf("%d\n", 11111*11111);
    printf("%d\n", 111111*111111);
    printf("%d\n", 111111111*111111111);
    printf("\n");
    // A2
    printf("%d\n", sizeof(float));
    printf("%f\n", 11111.0*11111.0);
    printf("%f\n", 111111.0*111111.0);
    printf("%f\n", 111111111.0*111111111.0);
    printf("\n");
    // A3
    printf("%f", sqrt(-10));
    printf("\n");
    // A4
    printf("%f\t%f\n", 1.0/1.0, 0.0/0.0);
    printf("\n");
    // A5
    printf("%f\n", 1/0);
    printf("\n");
    return 0;
}
