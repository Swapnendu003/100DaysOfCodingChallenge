#include <stdio.h>
void selectionsort(int a[], int n)
{
    int i, j,t;
    for (i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (j = i; j <= n - 1; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
    t=a[min];
    a[min]=a[i];
    a[i]=t;
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
    
    selectionsort(a, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}