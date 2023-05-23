//Write a program to checks if an integer number can be divisible by 5 but not by 15
#include <stdio.h>
int main()
{
    int n;
    printf ("ENter number which is to be checked");
    scanf("%d", &n);
    if (n%5==0 && n%15!=0)
    {
        printf ("True");
    }
    else{
        printf("false");
    }
    return 0;
}