#include <stdio.h>

#define PI 3.141592653589793238462643383279

int main() 
{
    double r;
    printf("Nhap ban kinh: "); scanf("%lf", &r);

    printf("Dien tich: %.2lf \n", 4 * PI * r * r);
    printf("The tich: %.2lf \n", (4 / 3.0) * PI * r * r * r);
    
	return 0;
}
