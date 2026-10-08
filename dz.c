#include <stdio.h>
#include <math.h>
#include <locale.h>

double calc_F(double x, double y)
{
    double d, arg, t;
    d = y + pow(x, 3) / 3;
    arg = y + x / (y * y + fabs(x * x / d));
    t = tan(arg);
    return 1 + t * t;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    double x, y;

    printf("Введите x и y: ");
    scanf("%lf %lf", &x, &y);

    printf("F(%g, %g) = %lf\n", x, y, calc_F(x, y));


    system("pause");
}
