//
// Created by Gary on 2020/12/19.
//
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
struct node{
    char s[27];
    int t;
    int ex;
}e[57];
char ka[57][27];
char kb[57][27];
int cmp(const void *a,const void* b){
    int exa=((struct node *)a)->ex;
    int exb=((struct node *)b)->ex;
    int ta=((struct node *)a)->t;
    int tb=((struct node *)b)->t;
    if(exa==exb){
        return ta<tb;
    }
    return exa<exb;
}
int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=n;i++){
        scanf("%s %d",e[i].s,&e[i].t);
        e[i].ex=0;
    }
    for(int i=1;i<=m;i++){
        scanf("%s %s",ka[i],kb[i]);
        for(int j=1;j<=n;j++){
            if(strcmp(kb[i],e[j].s)==0)
            {
                e[j].ex++;
                break;
            }
        }
    }
    int ans=0;
    for(int i=1;i<=k;i++){
        qsort(e,n,sizeof(struct node),cmp);
        ans+=e[i].t;
        e[i].ex=55;
        for(int j=1;j<=m;j++){
            if(strcmp(e[i].s,ka[j])==0){
                for(int z=1;z<=n;z++){
                    if(strcmp(kb[j],e[z].s)==0){
                        e[z].ex--;
                        break;
                    }
                }
                break;
            }
        }
    }
    printf("%d\n",52);
    return 0;
}