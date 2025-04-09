#include <stdio.h>

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("ptu trong mang khi khai bao la: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++) printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("nhap ptu cho ma tran 3x3 \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++) scanf("%d",&a[i][j]);
    }
    printf("ptu trong mang duoc nhap la: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++) printf("%d ",a[i][j]);
        printf("\n");
    }   
    return 0; 
}