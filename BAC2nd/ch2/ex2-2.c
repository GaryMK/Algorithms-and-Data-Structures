//
// Created by Gary on 2020/11/12.
// exercise hanxin

#include<stdio.h>
int main()
{

    int a,b,c;
    while (scanf("%d%d%d", &a, &b, &c) == 3)
    {
        // Mthod 1
        /*
        int sum,min = 101;
        for (int i = 4; i < 34; ++i) {
            for (int j = 3; j < 21; ++j) {
                for (int k = 2; k < 15; ++k) {
                    if ((3 * i + a) == (5 * j + b) && (5 * j + b) == (7 * k + c)) {
                        sum = (3 * i + a);
                        if (sum < min)
                            min = sum;
                    }
                }
            }
        }
        if (min != 101) {
            printf("%d\n", min);
        } else printf("No answer\n");
        */

        // Method 2
        for (int i = 10; i < 101; ++i) {
            if (i % 3 == a && i % 5 == b && i % 7 == c) {
                printf("%d\n", i);
                break;
            }
            if (i == 100)
                printf("No answer\n");
        }
    }
    return 0;
}

