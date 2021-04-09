//
// Created by Gary on 2020/12/19.
//
#include<stdio.h>
int n[107];
int b[107][10007];
int ex[10007];
int main(){
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
        scanf("%d",&n[i]);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n[i];j++){
            scanf("%d",&b[i][j]);
        }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=10000;j++)
            ex[j]=0;
        int num=0;
        for(int j=1;j<=n[i];j++){
            if(ex[b[i][j]]==0){
                ex[b[i][j]]=1;
                printf("%d ",b[i][j]);
                num++;
            }
        }
        for(int j=num+1;j<=n[i];j++)
            printf("0 ");
        printf("\n");
    }
    return 0;
}
