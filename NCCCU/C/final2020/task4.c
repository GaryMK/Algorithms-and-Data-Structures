//
// Created by Gary on 2020/12/19.
//
#include<stdio.h>
#include<string.h>
char s[207];
char ans[207];
int main(){
    int x;
    scanf("%s",s);
    scanf("%d",&x);
    int now=1;
    int len=strlen(s);
    int last=0;
    for(int i=0;i<=len;i++){
        if(s[i]=='['){
            if(now == x){
                strncpy(ans,s+last,i-last);
                ans[i-last]=0;
                printf("%s ",ans);
            }
            now++;
            last=i+1;
        }
        if(s[i]==']'){
            if(now == x){
                strncpy(ans,s+last,i-last);
                ans[i-last]=0;
            }
            now--;
            last=i+1;
        }
    }
    printf("\n");
    return 0;
}
