#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float s=0;
    printf("nhap n="); scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        s+=(1.0/i); 
    } 
    printf("s=%.2f",s);
    
    return 0; 
}
