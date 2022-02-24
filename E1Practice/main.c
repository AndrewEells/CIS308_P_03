#include <stdio.h>

int main() {
    float x = 3.141592653589793238;
    double z = 3.141592653589793238;
    printf("x=%f\n", x);
    printf("z=%f\n", z);
    printf("x=%20.18f\n", x);
    printf("z=%20.18f\n", z);

    char letter = 'A';
    int val = (int) letter;
    printf("%c\n",letter);
    printf("%d",val);

    int i, num, factorial;

    printf("Enter a positive integer to factor.");
    scanf("%d", factorial);
    printf("Enter a positive integer for num");
    scanf("%d",num);

    for (i = 0; i <= num; i++) {
        factorial *= num;
    };

    printf("%d/n", factorial);

}
