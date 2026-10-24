#include <stdio.h>
int main() {
    double base;
    double height;

    printf("enter a base length\n");
    scanf("%lf", &base);

    printf("enter a height number\n");
    scanf("%lf", &height);

    double area = (.5)*(base*height);
    printf("area is %.2f", area);

    return 0;
}