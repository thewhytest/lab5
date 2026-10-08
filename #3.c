#define  _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>


void check_conditions(int A, int B, int C)
{
    int usl_a, usl_b;
    usl_a = (A % 2 == 0) != (B % 2 == 0);
    usl_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("Условие а) выполнено (1 - да, 0 - нет): %d\n", usl_a);
    printf("Условие б) выполнено (1 - да, 0 - нет): %d\n", usl_b);
}

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, y;
    int A, B, C;      
    int usl_a, usl_b;
    double x = 2.7;
    int t = -6;

  
   

    a = log(x);
    b = sqrt(x * x + t * t);
    y = pow(fabs(a - b * x), 1.0 / 5.0);

    printf("При x = %.4f значение функции y = %.4f\n", x, y);

    A = (int)a;
    B = (int)b;
    C = (int)y;

    printf("A = %d, B = %d, C = %d\n", A, B, C);
    check_conditions(A, B, C);
    return 0;
}
