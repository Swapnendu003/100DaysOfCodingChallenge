#include <stdio.h>

typedef struct complex {
    float real;
    float im;
} complex;

complex add(complex n1, complex n2);

int main() {
    struct complex n1, n2, result;
    printf("Enter the real and imaginary parts for the 1st complex num \n");
    scanf("%f %f", &n1.real, &n1.im);
    printf("Enter the real and imaginary parts for the 2nd complex num \n");
    scanf("%f %f", &n2.real, &n2.im);

    result = add(n1, n2);
    printf("Sum = %.1f + %.1fi", result.real, result.im);

    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.im = n1.im + n2.im;
    return temp;
}
