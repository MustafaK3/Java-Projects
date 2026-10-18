#include <stdio.h>

void Echeck(int num1, int num2, int num3, int num4);
void Ocheck(int num1, int num2, int num3, int num4);

int main(void) {
    int num1, num2, num3, num4;

    printf("Enter four numbers: two even and two odd.\n");

    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    Echeck(num1, num2, num3, num4);
    Ocheck(num1, num2, num3, num4);

    return 0;
}

void Echeck(int num1, int num2, int num3, int num4) {
    int minEven;
    int foundEven = 0;

    // Check num1 and update the smallest even number.
    if (num1 % 2 == 0) {
        if (!foundEven || num1 < minEven) {
            minEven = num1;
        }
        foundEven = 1;
    }

    // Check num2 and update the smallest even number.
    if (num2 % 2 == 0) {
        if (!foundEven || num2 < minEven) {
            minEven = num2;
        }
        foundEven = 1;
    }

    // Check num3 and update the smallest even number.
    if (num3 % 2 == 0) {
        if (!foundEven || num3 < minEven) {
            minEven = num3;
        }
        foundEven = 1;
    }

    // Check num4 and update the smallest even number.
    if (num4 % 2 == 0) {
        if (!foundEven || num4 < minEven) {
            minEven = num4;
        }
        foundEven = 1;
    }

    if (foundEven) {
        printf("The smallest even number is %d\n", minEven);
    }
}

void Ocheck(int num1, int num2, int num3, int num4) {
    int minOdd;
    int foundOdd = 0;

    // Check num1 and update the smallest odd number.
    if (num1 % 2 != 0) {
        if (!foundOdd || num1 < minOdd) {
            minOdd = num1;
        }
        foundOdd = 1;
    }

    // Check num2 and update the smallest odd number.
    if (num2 % 2 != 0) {
        if (!foundOdd || num2 < minOdd) {
            minOdd = num2;
        }
        foundOdd = 1;
    }

    // Check num3 and update the smallest odd number.
    if (num3 % 2 != 0) {
        if (!foundOdd || num3 < minOdd) {
            minOdd = num3;
        }
        foundOdd = 1;
    }

    // Check num4 and update the smallest odd number.
    if (num4 % 2 != 0) {
        if (!foundOdd || num4 < minOdd) {
            minOdd = num4;
        }
        foundOdd = 1;
    }

    if (foundOdd) {
        printf("The smallest odd number is %d\n", minOdd);
    }
}