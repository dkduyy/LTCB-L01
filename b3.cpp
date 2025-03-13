#include <stdio.h>

int main()
{
	long long a, b;
	
	printf("nhap a="); scanf("%lld", &a);
	printf("nhap b="); scanf("%lld", &b);
	
	printf("%lld + %lld = %lld \n\n", a, b, a+b);
	printf("%lld - %lld = %lld \n", a, b, a-b);
	printf("%lld - %lld = %lld \n\n", b, a, b-a);
	printf("%lld * %lld = %lld \n\n", a, b, a*b);
	printf("%lld / %lld = %lld \n", a, b, a/b);
	printf("%lld / %lld = %lld \n", b, a, b/a);
	
	return 0; 
} 
