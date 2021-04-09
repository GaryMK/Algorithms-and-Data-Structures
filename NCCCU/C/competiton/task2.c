//
// Created by Gary on 2020/11/28.
//
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m;
    int i,res=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++){
        if((i%3!=0&&i%11!=0)){
            continue;
        }
        if(i%5==0){
            res++;
        }
    }
    printf("%d",res);
    return 0;
}
