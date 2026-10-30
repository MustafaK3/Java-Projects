#include <stdio.h>
int main () {
    // array that tracks each one of the element being used
    double temp[7];
    int days;
    printf("how many days do you want to sample?\n");
    scanf("%d", &days);
    for(int i=0; i<days;i++) {

        printf("enter the whether for day %d\n", i+1);
        scanf("%lf", &temp[i]);

    }
    for(int i=0;i<days;i++){
        printf("results for day %d %.2f\n" , days, temp[i]);
    }
    printf("\n");

    // basic array code to learn how to use them
   /* int input =5;
    int num[input];
    printf("type in 5 numbers\n");
    for(int i=0; i<input; i++) {
        scanf("%d", &num[i]);
    }
    printf("you typed : ");
    for(int i=0; i<input; i++){
                printf(" %d", num[i]);

    }
    printf("\n");
    */
  return 0;              
}