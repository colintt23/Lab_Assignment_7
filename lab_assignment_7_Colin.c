#include <stdio.h>

void swap(int *xp,int *yp)
{

    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubbleSort(int arr[],int n)
{
    int count = 0;
    for(int i = 0; i<n-1;i++)
    {
        count = 0;
        for (int k = 0; k < n-i-1; k++)
        {
            if(arr[k] > arr[k+1])
            {
                swap(&arr[k],&arr[k+1]);
                count++;
            }

            
        }
        printf("\n");
        for(int p = 0;p<n;p++)
            {
                printf("%d ",arr[p]);
            }
        printf("\nNumber of swaps: %d\n\n",count);
    }
}

int main(void)
{
    int arr[]= {97,16,45,63,13,22,7,58,72};
    bubbleSort(arr,9);
    return 0;
}