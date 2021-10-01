#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *A,p,q;
    printf("Enter array size: ");
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter no. of rows and columns (nxm): ");
    scanf("%d%d",&p,&q);
    if(p*q!=n)
    {
        printf("2D Matrix can't be formed");
    }
    else
    {
        int count=0;
        int B[p][q];
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                B[i][j]=A[count];
                count++;
            }
        }
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                printf("%d  ",B[i][j]);
            }
                printf("\n");
        }
    }
    return 0;
}