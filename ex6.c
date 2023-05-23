/*Write a function to compute the greatest common divisor given by Euclid’s algorithm,
exemplified for J = 1980, K = 1617 as follows: 1980 / 1617 = 1 1980 – 1 * 1617 = 363 1617 /
363 = 4 1617 – 4 * 363 = 165 363 / 165 = 2 363 – 2 * 165 = 33 5 / 33 = 5 165 – 5 * 33 = 0
Thus, the greatest common divisor is 33.*/
#include <stdio.h>
int gcd (int a, int b)
{
if (b==0)
return a;
else
return gcd (b, a%b);
}
int main ()
{
    int a, b, g;
    printf ("Enter two numbers whose GCD you want to check");
    scanf ("%d %d", &a, &b);
    g = gcd (a,b);
    printf ("The GCD of %d and %d is %d", a,b,g);

    return 0;
}