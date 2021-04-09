//
// Created by Gary on 2020/12/19.
//
#include<stdio.h>
int fa[100010],num[100010];
int x,y;
void find(int x)
{
    num[x]++;
    if(fa[x]!=x)
        find(fa[x]);
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        fa[i]=i;
    for(;;)
    {
        scanf("%d %d",&x,&y);
        if(x==0&&y==0)
            break;
        find(x);
        fa[y]=x;
    }
    int ans;
    int ma=0;
    for(;;){
        int t;
        scanf("%d",&t);
        if(t==0)
            break;
        if(ma==0){
            ans=t;
            ma=num[t];
        }else{
            if(num[t]>ma){
                ans=t;
                ma=num[t];
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
