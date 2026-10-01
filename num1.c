#include <stdio.h>
#include <math.h>
#include <locale.h>

#define M_PI 3.14159265358979323846

int main(void)
{
  setlocale(LC_ALL,"Russian");
    double gr;                  
    double rad, result;

    puts("Введите угол в градусах:");
    scanf("%lf", &gr);         

    rad = gr * M_PI / 180;          
    result = sin(rad);            
    printf("sin(%.2f град) = %.6f\n", gr, result);  
    return 0;
}
