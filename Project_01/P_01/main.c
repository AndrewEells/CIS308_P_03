#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
 * 1. reads arithmetic-like expressions from txt file and checks them all for matching pairs
 * 2. read txt file line by line, for each char push onto stack, if current char matches top char on stack remove both, if not, push current char onto stack
 * make functions for:
 *      push
 *      pop
 *      peek
 *      validate
 * 3. if, at end of line, stack is empty, move to next line.
 *      else -
 */

//char currentLine[];

int validateChars(char[]);
int validateSequence(char[]);


int main() {

    char* currentLine;
    currentLine = malloc(sizeof (char *));
    FILE* inputFile = fopen("expressions.txt","r");

    if (inputFile != NULL) {
        while (fscanf(inputFile, "%s",currentLine) != EOF) {
            printf("print this.");
            if (validateChars(currentLine) != 0) {
                printf("validateChars returned 1.");
                break;
            } else {
                if (validateSequence(currentLine) != 0) {
                    printf("Validate Sequence returned 1.");
                    break;
                }
            }
        }
        fclose(inputFile);
    }
}

int validateChars(char input[]) {
    for (int i = 0; i < strlen(input-1); ++i) {
        if (strcspn(input,"[]{}()") != 0) {
        //if((char *) input[i] != "{" && input[i] != "}" && input[i] != "[" && input[i] != "]" && input[i] != "(" && input[i] != ")") {
            return 1;
        } else {
            continue;
        }
    }
    return 0;
}

int validateSequence(char inputSequence[]) {
    char* openingBrackets;
    int numBrackets = 0;
    for (int i = 0; i < strlen(inputSequence-1); ++i) {
        if (strcspn(&inputSequence[i],"({[") == 0) {
            strcat(openingBrackets,&inputSequence[i]);
            numBrackets++;
        } else {
            if (inputSequence[i] == "[" && openingBrackets[strlen(numBrackets)] == "]") {
                numBrackets--;
            } else if (inputSequence[i] == "{" && openingBrackets[strlen(numBrackets)] == "}") {
                numBrackets--;
            } else if (inputSequence[i] == "(" && openingBrackets[strlen(numBrackets)] == ")") {
                numBrackets--;
            } else {
                return 1;
            }
        }
    }
    if (numBrackets == 0) {
        return 0;
    } else {
        return 1;
    }
}

