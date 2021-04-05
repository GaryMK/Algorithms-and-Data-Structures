#include <stdio.h>

int main() {
    int N,weight=0, remain=0;
    double money;
    scanf("%d", &N);
    printf("%d\n", N);
    for (int i = 0; i < N; ++i) {
        printf("%d\n",i);
        char type;
        int gram;
        double price;
        scanf("%c %d %lf",&type,&gram,&price);
        printf("%c\n%d\n%lf\n",type,gram,price);
        if (type == 'R')
        {
            if (gram > 200)
            {
                money += (gram -200) * price;
            }
        } else
        {
            money += price * gram;
        }
        weight += gram;
    }
    scanf("%d", &remain);
    if (remain <= weight/20) {
        money *= 0.9;
    }
    printf("%.2lf", money);
}
