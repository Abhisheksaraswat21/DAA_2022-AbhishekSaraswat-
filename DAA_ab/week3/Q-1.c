/*
Wap to implement bulbble sort and find total number of comparisons

*/
#include <stdio.h>

void bubbleSort (int arr[], int n)
{
    int count = 0;
    
    for(int i =0; i< n-1; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(arr[j] >arr[j+1])
            {
                int temp = 0;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
            
            count++ ;
            
        }
    }
    
    //printing array
    for(int i =0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\n total comparisons is %d",count);
}


int main()
{

int arr[]  = {5,1,4,2,8};   
int n = sizeof arr/sizeof arr[0];


bubbleSort(arr, n);


    return 0;
}
