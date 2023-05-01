#include <stdio.h>
#include <string.h>

struct students
{
    int roll;
    char name[50];
    char dept[50];
    char course[50];
    int yj;
};

struct students data[60];

void year(struct students *studs, int year_of_join, int ns)
{
    printf("Students who joined in %d:", year_of_join);
    int i;
    for (i = 0; i < ns; i++)
    {
        if (studs[i].yj == year_of_join)
        {
            printf("%s \n", studs[i].name);
        }
    }
}

void data_of_student(struct students *studs, int rn, int ns)
{
    int i;
    printf("Students whose data is needed his/her roll number is %d:\n", rn);
    for (i = 0; i < ns; i++)
    {
        if (studs[i].roll == rn)
        {
            printf("The name of the student is %s \n", studs[i].name);
            printf("The roll number of the student is %d \n", studs[i].roll);
            printf("The course of the student is %s \n", studs[i].course);
            printf("The department of the student is %s \n", studs[i].dept);
            printf("The year of joining of the student is %d \n", studs[i].yj);
        }
    }
}

int main()
{
    int n = 0;
    int i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter details of student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &data[i].roll);
        getchar();
        printf("Name: ");
        gets (data[i].name);
        printf("Department: ");
        gets (data[i].dept);
        printf("Course: ");
        scanf("%s", data[i].course);
        printf("Year of joining: ");
        scanf("%d", &data[i].yj);
    }

    int year_of_join = 0;
    printf("\nEnter the year to get the names of students who joined in that year: ");
    scanf("%d", &year_of_join);
    year(data, year_of_join, n);

    int rn = 0;
    printf("\nEnter the roll number of the student to get their data: ");
    scanf("%d", &rn);
    data_of_student(data, rn, n);

    return 0;
}