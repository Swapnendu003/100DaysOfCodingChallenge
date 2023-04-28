#include <stdio.h>

 int main ()
 {
    int i,j,n,x,min,max, maxpos,minpos;
    printf ("Enter the size of the");
    scanf ("%d", &n);
    int a[n];
    for (i=0;i<n;i++)
    scanf ("%d", &a[i]);
    max=a[0];
    min= a[0];
    maxpos=0;
    minpos=0;
     for (j=0;j<n;j++)
    { 
        if (a[j]>max)
        {
            max= a[j];
            maxpos=j;
        }
        if (a[j]<min)
        {
            min =a[j];
            minpos=j;
        }
    }
x= a[maxpos];
a[maxpos]=a[minpos];
a[minpos]=x;
printf("After interchange array elemnts are: ");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	return 0;
 }