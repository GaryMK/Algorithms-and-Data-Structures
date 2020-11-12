// exercise2-3 triangle
// Created by Gary on 2020/11/12.
//
#include<stdio.h>
int main(){
    // Method 1
    /*
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int sum = 2 * n -1;
        for (int j = 0; j < sum; ++j) {
            if (j > i -1 && j < sum-i) {
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    */

    // Method 2
    int n, sp = 0;
    scanf("%d", &n);
    n = n * 2 -1;
    while (n > 0)
    {
        for (int i = 0; i < sp; ++i) {
            printf(" ");
        }
        for (int i = 0; i < n; ++i) {
            printf("*");
        }
        n -= 2;
        sp++;
        printf("\n");
    }
    return 0;
}
