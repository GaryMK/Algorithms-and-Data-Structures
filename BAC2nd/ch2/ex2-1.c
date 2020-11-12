//
// Created by Gary on 2020/11/12.
// exercise2-1 daffodil

#include<stdio.h>
#include<math.h>
int main() {
    for (int i = 1; i < 9; ++i) {
        for(int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; ++k) {
                int sum = i * 100 + j * 10 + k;
                int verify = i * i * i + j * j * j + k * k * k;
                if (sum == verify) {
                    printf("%d\n", sum);
                }
            }
        }
    }
}
