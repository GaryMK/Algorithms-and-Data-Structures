//
// Created by Gary on 2020/12/19.
//
#include<stdio.h>
int a[1007];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i]==a[j]*a[j]){
                printf("%d ",a[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}