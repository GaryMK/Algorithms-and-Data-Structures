#include <stdio.h>
int main(){
    int st,et;
    int i,res=0;
    scanf("%d",&st);
    scanf("%d",&et);
    for(i=st;i<24;i++){
        res++;
    }
    for(i=0;i<et;i++){
        res++;
    }
    printf("%d",res);
    return 0;
}
