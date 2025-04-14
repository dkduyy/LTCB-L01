#include <stdio.h>

int power(int a, int b){
    if (b==0) return 1;
        else return a*power(a,b-1);
}
int main(){
    int x,y;
    printf("nhap x,y="); scanf("%d%d",&x,&y);
    printf("%d^%d= %d",x,y,power(x,y));
    return 0;
}