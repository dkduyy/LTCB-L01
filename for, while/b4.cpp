#include <stdio.h>
#include <math.h>

int main()
{
	printf("tong cac so le 1-100 la: ");
	int s=0; 
	for (int i=1; i<=99; i++)
	{
		if ((i%2)!=0)  s+=i; 
	} 
	printf("%d",s);
	 
	return 0; 
}
