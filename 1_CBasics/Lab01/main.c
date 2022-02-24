/* Lab01
 * Author: Andrew Eells
 */

#include <stdio.h>

int MyPower(int,int);

int main() {
    int base;
    int power;

    printf("Enter a base: ");
    scanf("%d", &base);
    getchar();
    printf("Enter a power: ");
    scanf("%d", &power);
    getchar();

    if (base < 0 && power < 0) {
        printf("Your inputs are both less than zero.");
    } else if (base < 0) {
        printf("Your base is invalid. (%d < 0)",base);
    } else if (power < 0) {
        printf("Your power is invalid. (%d < 0)",power);
    } else {
        printf("Your result is: %d", MyPower(base,power));
    }
    ;
}

int MyPower(int base,int power) {
    if (power != 0) {
        return (base * MyPower(base,power-1));
    } else {
        return 1;
    }
}