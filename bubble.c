#include <stdio.h>



void bubblesort(int a[], int n)
{
    for (int i=n-1; i>=0;i--)
    {
        for (int j=0; j<=i-1; j++)
        if (a[j+1]<a[j])
        {
            int t= a[j+1];
            a[j+1]=a[j];
            a[j]=t;

        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter the values of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    bubblesort(a, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
