#include <stdio.h>

int main()
{
    int i,n,max,smax;
    printf ("Enter the size of the array");
    scanf ("%d", &n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the elements of the array: ");
        scanf ("%d", &n);
    }
    max= a[0];
    smax=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]>max)
        {
        max=a[i];
    }
    if (a[i]>smax && a[i]!= max)
    {
        smax = a[i];
    }
    }
    printf ("The second lasrget element of the array is: %d", smax);
}