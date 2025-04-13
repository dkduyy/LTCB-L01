#include <stdio.h>

void swap(int a[], int b, int c)
{
    int temp=a[b];
    a[b]=a[c];
    a[c]=temp;
}

void qsort(int a[], int l, int r)
{
    int i, j, x;
    x= a[(l+r)/2];
    i=l; j=r; 
    do
    {
        while (a[i]<x) i++;
        while (a[j]>x) j--;
        if (i<=j) 
        {
            swap(a, i, j);
            i++;
            j--;
        }

    } while (i<=j);
    if (i<r) qsort(a, i, r);
    if (j>l) qsort(a, l, j);
}

int main()
{
    int n;
    printf("nhap n= "); scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("nhap ptu thu %d: ", i+1); scanf("%d",&a[i]);
    }
    qsort(a,0, n-1);
    printf("Mang sau khi da sap xep la: ");
    for(int i = 0; i < n; i++) 
        printf("%d ", a[i]);
    return 0;
}
