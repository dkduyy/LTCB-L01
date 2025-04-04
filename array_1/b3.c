#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("nhap n="); scanf("%d",&n);
    int a[n], s1=0, d1=0, s2=0, d2=0, s=0;
    for(int i=0; i<n;i++)
    {
        printf("nhap phan tu thu %d= \n",i+1); scanf("%d",&a[i]);
        s+=a[i];
        if (a[i]>=0) 
        {
            s1+=a[i];
            d1++;
        }else
        {
            s2+=a[i];
            d2++;
        }
    }
    printf("tong cac so nguyen duong: %d \n",s1);
    printf("tong cac so nguyen am: %d \n",s2);
    printf("tbinh tong cac so nguyen duong: %.2f \n",(s1*1.0)/d1);
    printf("tbinh tong cac so nguyen am: %.2f \n",(s2*1.0)/d2);
    printf("tbinh tong cac so nguyen: %.2f \n",(s*1.0)/n);

    return 0;
}