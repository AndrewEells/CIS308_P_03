#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct Person {
    char name[20];
    int age;
    enum {child, student, adult} kindOfPerson;

    union fields {
        struct {
            char school[50];
        } child;
        struct {
            char college[50];
            float gpa;
        } student;
        struct {
            char company[50];
            float salary;
        } adult;
    } info;
} person;

void display(struct Person *p);

int main(){



    person willie;
    willie.kindOfPerson = student;
    strcpy(willie.name, "Willie");
    willie.age = 20;
    strcpy(willie.info.student.college, "K-State");
    willie.info.student.gpa = 3.5;



    person *alison = malloc(sizeof (struct Person));
    strcpy(alison->name,"Alison");
    alison->age = 10;
    strcpy(alison->info.child.school, "Amanda Arnold Elementary");
    alison->kindOfPerson = child;

    person *bob = malloc(sizeof (struct Person));
    bob->kindOfPerson = adult;
    strcpy(bob->name,"Bob");
    bob->age = 35;
    strcpy(bob->info.adult.company, "Best Buy");
    bob->info.adult.salary = 45000;

    display(&willie);
    display(alison);
    display(bob);

    free(alison);
    free(bob);

}



void display(struct Person *p) {
    printf("Name: %s\n",p->name);
    printf("Age: %d\n",p->age);
    switch(p->kindOfPerson) {
        case student:
            printf("College: %s\n",p->info.student.college);
            printf("GPA: %f\n", p->info.student.gpa);
            break;
        case child:
            printf("School: %s\n",p->info.child.school);
            break;
        case adult:
            printf("Company: %s\n",p->info.adult.company);
            printf("Salary: %f\n",p->info.adult.salary);
            break;
    };
}
