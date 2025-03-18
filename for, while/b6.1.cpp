#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    
    int c,x=a,y=b; 
	while (b>0) 
	{
		c=a%b;
		a=b;
		b=c;  
	} 
	printf("ucln(%d,%d)= %d \n",x,y,a);
	printf("bcnn(%d,%d)= %d",x,y,(x/a)*y);
	
	return 0; 
}
