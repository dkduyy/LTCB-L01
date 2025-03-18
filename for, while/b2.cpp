#include <stdio.h>
#include <math.h>

int main() 
{
	int n; 
	printf("nhap so: "); scanf("%d",&n); 
	int x=0;
	for (int i =2; i<sqrt(n); i++)
	{
		if ((n%i)==0) 
		{
			x=1;
			break; 
		} 
	} 
	if (x==0) 
		printf("%d là so nguyen to", n);
	else
	 	printf("%d khong là so nguyen to", n);
	
	return 0; 
}
