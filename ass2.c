#include <stdio.h>

int gcd (int a, int b)
{
    if (b==0)
    return a;
    else 
    return (gcd(b, a%b));
}

int main ()
{ int a,b, res;
    printf ("Enter two numbers whose GCD need to calculated");
    scanf ("%d%d", &a, &b);
    res= gcd (a,b);
    printf("%d", res);
    return 0;
}