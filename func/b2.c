#include <stdio.h>

int gt(int a){
    if (a==0) return 1;
    else return a*gt(a-1);
}

int main(){
    int n;
    printf("nhap n= "); scanf("%d",&n);
    printf("%d!= %d",n, gt(n));
    return 0;
}