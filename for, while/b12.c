#include <stdio.h>
#include <math.h>

int main()
{
    int i=0, j=1, k=1;
    float x, eps, sin=0,n;
    printf("nhap x= "); scanf("%f",&x);
    printf("nhap eps= "); scanf("%f",&eps);
    int a=x;
    x= x*3.14/ 180;
    do
    {
        // Tinh (2i+1)!
        while (j<=(2*i+1))
        {
            k=k*j;
            j++;
        }
        // Tinh Sin(x)
        n=pow(-1,i)*(pow(x,2*i+1)/k);
        sin+=n;
        i++;
    } while (n>eps);

    printf("Sin(%.0f)=%.2f",a,sin);
    return 0;
}