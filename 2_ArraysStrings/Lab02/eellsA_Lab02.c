/* Lab02 */
/* Author: Andrew Eells */

#include <stdio.h>
#include <string.h>

//Precondition: char[] != null, int > 0
//Post-condition: "yes" or "no" has been returned based on whether the char[] contains repeated characters
char* checkRepChar(char[], int);

//Precondition: inputFile "names.txt" exists and is not empty
//Post-condition: each name has been printed, followed by whether or not the name has repeating characters, one name per line
int main() {
    FILE *inputFile = fopen("../names.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening file\n");
    }
    char name[20];

    while (fscanf(inputFile, "%s", name) != EOF) {
        printf("Hello %s, (%s)\n", name, checkRepChar(name, strlen(name)));
    };

    fclose(inputFile);
}

//Precondition: char[] != null, int > 0
//Post-condition: "yes" or "no" has been returned based on whether the char[] contains repeated characters
char* checkRepChar(char name[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i != j) {
                if (name[i] == name[j]) {
                    return "yes";
                } else {
                    continue;
                }
            } else {
                continue;
            }
        }
    }
    return "no";
}