#include <stdio.h>

void swap(int *a, int *b){
    int tmp= *b;
        *b= *a;
        *a= tmp;
}
int main(){
    int a,b;
    printf("nhap a= "); scanf("%d",&a);
    printf("nhap b= "); scanf("%d",&b);
    swap(&a, &b);
    printf("a= %d, b= %d", a,b);
    return 0;
}