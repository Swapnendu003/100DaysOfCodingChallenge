#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the value for the dimension of the matrix: ");
    scanf("%d", &n);
    int a[n][n];
    int left = 0, right = n - 1;
    int top = 0, bottom = n - 1;
    int num = 1;

    while (left <= right && top <= bottom)
    {

        for (i = left; i <= right; i++)
        {
            a[top][i] = num++;
        }
        top++;

        for (j = top; j <= bottom; j++)
        {
            a[j][right] = num++;
        }
        right--;
        if (top <= bottom)
        {
            for (i = right; i >= left; i--)
            {
                a[bottom][i] = num++;
            }
            bottom--;
        }

        if (left <= right)
        {
            for (j = bottom; j >= top; j--)
            {
                a[j][left] = num++;
            }
            left++;
        }
    }

    printf("Spiral Pattern:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
