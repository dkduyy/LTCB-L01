#include <stdio.h>
#include <math.h> 

int main() 
{
	long long s=0;
	for(int i=1; i<=10; i++)
	{
		int n;
		printf("nhap so thu %i:",i); scanf("%d",&n);
		s+=n; 
	} 
	printf("tong cua 10 so nguyen là:%lld",s);
	
	return 0; 
} 

 
