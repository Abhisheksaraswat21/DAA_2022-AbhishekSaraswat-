// /*
// wap t0 implement selection sort and find out total number of comparisons


#include <math.h>
#include <stdio.h>
 
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
   
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}





// */
// #include <stdio.h>



// void insertionSort(int arr[], int n)
// int key ;


// {
    
//     for(int i = 1; i<n; i++)
//     {
//         key = arr[i];
//         int j = i-1;
        
//         if(arr[j] > key)
//         {
//               //swaping
//                 int temp;
                
//                 arr[j+1] = arr[j];
                
//                 arr[j] = key;
                
//                 key = temp;
            
//         }
//     }
    
    
      
//     }
    
//     //printing the array
    
//     for(int i=0; i<n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     printf("total count is %d", count);
// }

// int main()
// {
//   int main()
// {
//     int arr[] = { 12, 11, 13, 5, 6 };
//     int n = sizeof(arr) / sizeof(arr[0]);
 
//     insertionSort(arr, n);
 
//     return 0;
// }


