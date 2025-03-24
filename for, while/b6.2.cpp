#include <stdio.h>
#include <math.h>

int main()
{
    int n; 
    printf("nhap so"); scanf("%d",&n);
    int s=1+n; 
    for (int i= 2; i<=sqrt(n); i++)
    {
        if ((n%i)==0)        
             if (i==sqrt(n)) s+=i;
             else s=s+i+(s/i);
    }         
    if (s==(2*n)) printf("%d la so hoan hao",n);
    else printf("%d khong la so hoan hao",n);      
    
    return 0;
} 
         
     
