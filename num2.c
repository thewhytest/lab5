#include <stdio.h>
#include <math.h>
#include<locale.h>

int main(void)
{
  setlocale(LC_ALL,"Russian");
    const double t = -6;  
    double x, a, b, y;

    printf("Введите x: ");
    scanf("%lf", &x);

    a = log(x);                      
    b = sqrt(x * x + t * t);        
    y = pow(fabs(a - b * x), 1.0 / 5.0);  

    printf("При x = %.1f значение функции y = %.4f\n", x, y);

    return 0;
}
