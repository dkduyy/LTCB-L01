#include <stdio.h>

void swap(int *a, int *b){
    int temp= *b;
    *b= *a;
    *a= temp;
}
void qsort(int a[], int l, int r){
    int i,j,x;
    i=l;
    j=r;
    x=a[(l+r)/2];
    while (i<=j) {
        while (a[i]<x) i++;
        while (a[j]>x) j--;
        if (i<=j){
            swap( &a[i], &a[j]);
            i++;
            j--;
        }
    }
    if (i<r) qsort(a, i, r);
    if (l<j) qsort(a, l, j);  
}
int main(){
    int n;
    printf("nhap n= "); scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d",&a[i]);
    qsort(a, 0, n-1);
    printf(" mang da duoc sap xep la: ");
    for(int i=0; i<n; i++) printf("%d ",a[i]);
    return 0;
} 