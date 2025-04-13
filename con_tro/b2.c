#include <stdio.h>

int main() {
	int a[10],
        *x = a;
	printf("nhap 10 so nguyen: ");
	for (int i = 0; i < 10; i++){
		scanf("%d", x + i);
	}
	printf("mang da nhap: ");
	for (int i = 0; i < 10; i++){
		printf("%d ", *(x + i));
	}
	return 0;
}