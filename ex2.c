//This program checks and displays whether a year is Leap Year or not
#include <stdio.h>

int main()
{
    int y, *p;
    p= &y;
    printf("ENter the year that is needed to be checked");
    scanf ("%d", p);
    if (*p%4==0 || *p%400==0 && *p%100!=0)
    {
        printf ("%d is a leap year", *p);

    }
else 
{
    printf("Not a leap year");

}
return 0;
}