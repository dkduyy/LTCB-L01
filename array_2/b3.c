#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,p;
    printf("nhap n,m,p= "); scanf("%d%d%d",&n,&m,&p);
    int a[n][m],
        b[m][p],
        c[n][p];
    //MT A
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
        {
            a[i][j]=rand()%10+1;
        }
    printf("ma tran A: \n");
    
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    // MT B
    for (int i=0; i<m; i++)
        for (int j=0; j<p; j++)
        {
            b[i][j]=rand()%10+1;
        }
    printf("ma tran B: \n");
    for (int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++) printf("%d ",b[i][j]);
        printf("\n");
    }
    // Tinh ma tran C
    printf("ma tran C=A x B la: \n");
    for (int i=0; i<n; i++)
        {
            for (int j=0; j<p; j++)
            {
                c[i][j]=0;
                for (int k=0; k<m; k++)
                    c[i][j]+=a[i][k]*b[k][j];
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }

    return 0;
    
}