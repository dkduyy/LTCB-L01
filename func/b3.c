#include <stdio.h>

int f(int a){
    if (a==1 ||a==0) return 1;
    else return f(a-1)+f(a-2);
}

int main(){
    int n;
    printf("nhap n= "); scanf("%d",&n);
    printf("ptu thu n la: %d", f(n));
    return 0;
}