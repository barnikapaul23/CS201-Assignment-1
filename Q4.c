#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef long long int lli;
void selectionsort(lli A[],lli n)
{
    for(lli i=0;i<n;i++)
    {
        for(lli j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            {
                lli temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        }
    }
}
void bubblesort(lli A[],lli n)
{
    lli count=1;
    while(count<n)
    {
        for(lli i=0;i<n-count;i++)
        {
            if(A[i]>A[i+1])
            {
                lli temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
        count++;
    }
}
int main()
{
    printf("Enter array elements: ");
    lli n;
    scanf("%lld",&n);
    lli A[n];
    for(lli i=0;i<n;i++)
    {
        A[i]=i+1;
    }
    clock_t startselectionsort,endselectionsort,startbubblesort,endbubblesort;
    lli timeselectionsort,timebubblesort;
    startselectionsort=clock();
    selectionsort(A,n);
    endselectionsort=clock();
    timeselectionsort=endselectionsort-startselectionsort;
    printf("Time taken for selection sort: %f\n",(double) timeselectionsort/ (double) CLOCKS_PER_SEC);
    startbubblesort=clock();
    bubblesort(A,n);
    endbubblesort=clock();
    timebubblesort=endbubblesort-startbubblesort;
    printf("Time taken for bubble sort: %f\n",(double) timebubblesort/ (double) CLOCKS_PER_SEC);
}