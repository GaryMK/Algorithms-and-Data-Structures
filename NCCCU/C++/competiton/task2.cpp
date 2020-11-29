//
// Created by Gary on 2020/11/29.
//
#include <iostream>
using namespace std;
#define MAX 10000
int main()
{
    int n,N[MAX];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin>> N[i];
    }
    int a = 1000000006;
    int b = 1000000012;
    return ((a % 1000000007) * (b % 100000007)) % 1000000007;
}
