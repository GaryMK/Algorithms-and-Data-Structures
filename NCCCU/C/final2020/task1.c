#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double ans=0;
    double m=0;
    double mva=0;
    double res=0;
    double allv=0;
    for(int i=0;i<n;i++){
        char s;
        double v,va;
        getchar();
        scanf("%c %lf %lf",&s,&v,&va);
        allv+=v;
        if(s=='R'){
            m+=v;
            mva=va;
        }else{
            ans+=v/100.0*va;
        }

    }
    scanf("%lf",&res);
    if(m-200.0>=0.1){
        ans+=(m-200.0)/100*mva;
    }
    if(res*20<=allv){
        ans*=0.9;
    }
    printf("%.2lf",ans);
    return 0;
}
