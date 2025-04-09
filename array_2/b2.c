#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y;
    printf("nhap do dai 2 ma tran a x b"); scanf("%d%d",&x,&y);
    int a[x][y],
        b[x][y];
    for (int i=0; i<x; i++)
        for (int j=0; j<y; j++)
        {
            a[i][j]=rand()%10+1;
            b[i][j]=rand()%10+1;
        }
    printf("ma tran A: \n");
    for (int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++) printf("%d ",a[i][j]);
        printf("\n");
    }   
    printf("ma tran B: \n");
    for (int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++) printf("%d ",b[i][j]);
        printf("\n");
    }   
    printf("tong 2 ma tran la: \n");
    for (int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++) printf("%d ",a[i][j]+b[i][j]);
        printf("\n");
    }   
    return 0;
}