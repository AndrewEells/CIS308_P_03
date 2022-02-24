#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char* name;
    int age;
    int schoolYear;
    // Freshman = 9
    // Sophomore = 10
    // Junior = 11
    // Senior = 12
};

int main() {

    struct student newStudent;
    struct student* studentPtr = &newStudent;
    studentPtr = malloc(sizeof (struct student));






    studentPtr->name = malloc(20 * (sizeof(char*)));
    studentPtr->age = malloc(sizeof (int));
    studentPtr->schoolYear = malloc(sizeof (int));

    printf("Enter the student's name: ");
    char* name;
    scanf("%s", name);
    strcpy(studentPtr->name, name);
    getchar();
    printf("Enter the student's age: ");
    scanf("%d", studentPtr->age);
    getchar();
    printf("Enter the student's year in school: ");
    scanf("%d", studentPtr->schoolYear);
    getchar();


    printf("Name: %s",newStudent.name);
    printf("Age: %d", newStudent.age);
    switch (newStudent.schoolYear) {
        case 9:
            printf("School Year: Freshman");
        case 10:
            printf("School Year: Sophomore");
        case 11:
            printf("School Year: Junior");
        case 12:
            printf("School Year: Senior");

    }
}



void displayStudent (struct student *stu) {

};
