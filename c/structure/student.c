#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int roll;
    char name[50];
    char class[10];
    char contact[11];
    char email[30];
} STUDENT;

void read(STUDENT *students, int n);
void show(STUDENT *students, int n);
void printLine(int n);

int main(void)
{
    int n;                                  //Static memory allocation
    STUDENT *students;
    printf("Number of Students: ");
    scanf("%d", &n);
    students = calloc(n, sizeof(STUDENT));     //Dynamic memory allocation
    read(students, n);
    show(students, n);
    free(students);
    return 0;
}

void read(STUDENT *students, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter student %d info:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d%*c", &students[i].roll);
        printf("Name: ");
        scanf("%[^\n]", students[i].name);
        printf("Class: ");
        scanf("%s", students[i].class);
        printf("Contact Number: ");
        scanf("%s", students[i].contact);
        printf("Email: ");
        scanf("%s", students[i].email);
    }
}

void show(STUDENT *students, int n)
{
    printf("%-10s%-30s%-10s%-15s%-30s\n", "Roll No", "Name", "Class", "Contact No", "Email");
    printLine(95);
    for (int i = 0; i < n; i++)
    {
        printf("%-10d%-30s%-10s%-15s%-30s\n", students[i].roll, students[i].name, students[i].class, students[i].contact, students[i].email);
    }
    printLine(95);
}
void printLine(int n)
{
    for (int i = 1; i <= n; i++)
        printf("-");
    printf("\n");
}