#include <stdio.h>


int main ()
{int n,i,j;
    printf ("Enter the size of the array");
    scanf("%d", &n);
     int arr[n];
    for (i=0; i<n; i++)
    scanf ("%d", &arr[i]);
    {
        int min = arr[0];
    for (j=0; j<n;j++)
    if (arr[j]<min)
    {
        printf ("The position of the minimun element is %d and the smallest number is %d", j, arr[j]);
    }
    }
}