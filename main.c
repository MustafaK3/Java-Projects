#include <stdio.h>
#include <math.h>
int main() {
    double a;
    double b;

    printf("enter a value for a\n");
    scanf("%lf", &a);

    printf("enter a value for b\n");
    scanf("%lf", &b);

    double c =sqrt(pow(a,2) + pow(b,2));
    printf("%lf", c);

    return 0;
}