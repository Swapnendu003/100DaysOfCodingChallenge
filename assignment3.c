#include <stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} dt;

int main()
{
    int i;
    dt date1, date2;
    printf ("Enter the value of day, month, and year for the 1st date");
    scanf("%d", &date1.day);
    scanf("%d", &date1.month);
    scanf("%d", &date1.year);
    printf("The first date is: %d/%d/%d \n", date1.day, date1.month, date1.year);
   printf ("Enter the value of day, month, and year for the 2nd date");
    scanf("%d", &date2.day);
    scanf("%d", &date2.month);
    scanf("%d", &date2.year);
    printf("The first date is: %d/%d/%d \n", date1.day, date1.month, date1.year);
    

    if (date1.day==date2.day && date1.month==date2.month && date1.year== date2.year)
    {
        printf("Equal");
    }
    else 
    {
        printf ("Unequal");
    }
}