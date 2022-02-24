#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void stringsort(char *strings[], int nstrings, int (*cmpfunc)());
int dictstrcmp(char *str1, char *str2);
int numstrcmp(char *str1, char *str2);
void printArray(char *array[], int size);

        int main() {
    char *array1[] = {"Zeppelin", "able", "baker", "Charlie"};
    char *array2[] = {"1", "234", "12", "3", "4", "24", "2"};

    printf("---- Before strcmp----\n");
    printArray(array1, 4);
    stringsort(array1, 4, strcmp);
    printf("\n");
    printf("---- After strcmp----\n");
    printArray(array1, 4);

    printf("\n\n");

    printf("---- Before Dictionry----\n");
    printArray(array1, 4);
    stringsort(array1, 4, dictstrcmp);
    printf("\n");
    printf("---- After Dictionry----\n");
    printArray(array1, 4);
    printf("\n\n");

    printf("---- Before ----\n");
    printArray(array2, 7);
    printf("\n");
    stringsort(array2, 7, numstrcmp);
    printf("---- After ----\n");
    printArray(array2, 7);

    return 0;
}

void stringsort(char *strings[], int nstrings, int (*cmpfunc)()) {

    // Your code here
}

int dictstrcmp(char *str1, char *str2) {

    // Your code here
}

int numstrcmp(char *str1, char *str2) {

    // Your code here
    
}

void printArray(char *array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");
}
