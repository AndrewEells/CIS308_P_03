#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char toUpperCase(char *name);
//void printReverse(char *name);

int main()
{
    char johnSmith[] = "John Smith";
    char maryCohen[] = "Mary Cohen";
    char carlWilliams[] = "Carl Williams";

    printf("%s", toUpperCase(&johnSmith));

    return 0;

}

char toUpperCase(char *name){
    char *ip;
    for (ip = name; ip < name+13; ip++) {
        *ip = toupper(*ip);
    }

    return name;}
