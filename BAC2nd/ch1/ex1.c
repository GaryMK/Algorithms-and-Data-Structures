#include<stdio.h>
#include<math.h>
#define PI acos(-1.0)
int main()
{
    // 1-1 average
    printf("1-1 average\n");
    double numA,numB,numC;
    scanf("%lf%lf%lf", &numA,&numB,&numC);
    printf("%06.3f", ((numA + numB + numC)/3));
    printf("\n\n");

    // 1-2 temperature
    printf("1-2 temperature\n");
    double f,c;
    scanf("%lf", &f);
    printf("%06.3f\n", c = 5*(f-32)/9);
    printf("%.3f", c);
    printf("\n\n");

    // 1-3 sum
    printf("1-3 sum\n");
    int n;
    scanf("%d", &n);
    printf("%d", ((1 + n)*n)/2);
    printf("\n\n");

    // 1-4 sin & cos
    printf("1-4 sin & cos\n");
    scanf("%d", &n);
    double rad = (n * PI) /180;
    printf("rad=%f PI=%f sin=%f cos=%f", rad, PI, sin(rad), cos(rad));
    printf("\n\n");

    // 1-5 discount
    printf("1-5 discount\n");
    int numb;
    scanf("%d", &numb);
    if(numb * 95 >= 300) printf("%.2f", (numb * 95 * 0.85));
    else printf("%.2f", numb * 95);
    printf("\n\n");

    // 1-6 triangle
    printf("1-6 triangle\n");
    double edgeA,edgeB,edgeC,temp;
    scanf("%lf%lf%lf", &edgeA, &edgeB, &edgeC);
    if(edgeA > edgeB) {temp = edgeA; edgeA = edgeB; edgeB = temp;}
    if(edgeA > edgeC) {temp = edgeA; edgeA = edgeC; edgeC = temp;}
    if(edgeB > edgeC) {temp = edgeB; edgeB = edgeC; edgeC = temp;}
    if(edgeA + edgeB > edgeC) {
      if(pow(edgeA, 2) + pow(edgeB, 2) == pow(edgeC, 2)) {
            printf("yes");
        }
    } else {
        printf("no");
    }
    printf("\n\n");

    // 1-7 year
    printf("1-7 year\n");
    int year;
    scanf("%d", &year);
    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) printf("yes");
            else printf("no");
        } else printf("yes");
    } else printf("no");
    printf("\n\n");

    return 0;
}
