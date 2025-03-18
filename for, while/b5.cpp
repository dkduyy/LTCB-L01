#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	
	printf("nhap so n="); scanf("%d",&n);
	printf("cac uoc cua n la: \n");
	for (int i=1; i<=n; i++)
	{
		if ((n%i)==0)
		{
			printf("%d ", i);
		} 
	} 
}
