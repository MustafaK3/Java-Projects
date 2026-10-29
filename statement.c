#include <stdio.h>
#include <stdbool.h>

int main () {
    int num;
    printf("enter a number\n");

    scanf(" %d", &num);

    if(num >= 1){   
        for(int i=0; i<5; i++) {
    printf("\nyour number is %d", num);  
    }
    } else if(num < 1) {

        for(int i=0;i<5;i++){
            printf("\nyou did not enter a number bigger than 1");

        }
}
return 0;
}