//Write a program to find smallest of three number(using ternary operator).
#include <stdio.h>
int main ()
{
    int a,b,c, max=0;
    printf ("Enter the value of three number \n");
    scanf ("%d %d %d", &a, &b, &c);
    max= (a>b && a>c)? a : ((b>a && b>c)? b :c);
    printf ("The max number among the three numbers is, %d", max);
    return 0;
}