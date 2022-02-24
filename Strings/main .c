
//
//  main.c
//  Strings
//
//  Created by Jorge Valenzuela on 5/4/21.
//
// Problems: 
/*
 1. Write a program in C to find the length of a string without 
    using library function.
 2. Write a program in C to separate the individual characters 
    from a string.
    Input: "Hello World from Manhattan!"
    Output:"H-e-l-l-o W-o-r-l-d f-r-o-m M-a-n-h-a-t-t-a-n-!"
 3. Write a program in C to compare if two strings are equal without using 
    string library functions
 3* Challenge yoursel and do problem 3 using pointers
 4. Write a C program to check whether a given ssubstring is present 
    in the given string.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define str_size 100 //Declare the maximum size of the string

int length(void);
void separateStr(void);
void separateStrUsingPtrs(void);
void compareTwoStr(void);
void isItSubStr(void);

int main(int argc, const char * argv[]) {

    // Problem 1
    int l = length();
    printf("Length of the string is : %d\n\n", l);
    
    // Problem 2
    //separateStr();
    
    // Problem 2*
    // separateStrUsingPtrs();
    
    // Problem 3
    //compareTwoStr();
    
    // Problem 4
    //isItSubStr();
    
    return 0;
}

int length() {
    int l= 0;
    char str1[str_size];
    printf("\n\nFind the length of a string :\n");
    printf("---------------------------------\n");
    printf("Input the string : ");
    scanf("%[^\n]s", str1); getchar();

    while (str1[l] != '\0') {
        l++;
    }
    
    return l;
}

void separateStr() {
    char str1[str_size];
    int l = 0;
    printf("\n\nSeparate the individual characters from a string :\n");
    printf("---------------------------------\n");
    printf("Input the string : ");
    scanf("%[^\n]s", str1); getchar(); // "Hello World from Manhattan!"

    
    // Your code HERE
    
    printf("\n\n");
}

void separateStrUsingPtrs() {
    int l = 0;
    char* str1;
    str1 = (char*)malloc(sizeof(char) * str_size);
    printf("\n\nSeparate the individual characters from a string :\n");
    printf("---------------------------------\n");
    printf("Input the string : ");
    scanf("%[^\n]s", str1); getchar();
    
    // CODE HERE
    
    printf("\n\n");
}

void compareTwoStr(void) {
    char str1[str_size], str2[str_size];
    int flag = 0; // Assume different
    printf("\nInput the 1st string : ");
    scanf("%s", str1);
    getchar();
    printf("Input the 2nd string : ");
    scanf("%s",str2);
    getchar();

    
    // CODE HERE


    if (flag==1)
            printf("The strings are equal.\n\n");
        else
            printf("The strings are NOT equal. \n\n");

}

void isItSubStr(void) {
    
    char str[80],search[20];
    int c1=0, c2=0, i, j;
    int flag = 0;
    
    printf("\n\nCheck whether a given  substring is present in the given string :\n");
    printf("-------------------------------------------------------------------\n");
    
    printf("Input the string : ");
    scanf("%s", str);

    printf("Input the substring to be search : ");
    scanf("%s",search);

    
    // CODE HERE
 
    if (flag==1)
            printf("The substring exists in the string.\n\n");
        else
            printf("The substring does not exist in the string. \n\n");

}






