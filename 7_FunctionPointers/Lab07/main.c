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
    // convert characters as needed here
    //bubble sort


    for (int i = 0; i < nstrings-1; i++) {
        for (int j = i+1; j < nstrings; j++) {
            if ((*cmpfunc)(strings[i], strings[j]) > 0) {
                char *tmp = strings[i];
                strings[i] = strings[j];
                strings[j] = tmp;
            }
        }
    }
}

int dictstrcmp(char *str1, char *str2) {

    while(1) {
        char c1 = *str1++;
        char c2 = *str2++;

        if(isupper(c1)) {
            c1 = tolower(c1);
        };
        if (isupper(c2)) {
            c2 = tolower(c2);
        };
        if (c1 != c2) {
            return c1 - c2;
        };
        if (c1 == '\0') {
            return 0;
        };
    }
}

int numstrcmp(char *str1, char *str2) {
    int charInt1 = atoi(str1);
    int charInt2 = atoi(str2);
    if (charInt1 < charInt2) {
        return -1;
    } else if (charInt1 == charInt2) {
        return 0;
    } else {
        return 1;
    }
}

void printArray(char *array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");
}