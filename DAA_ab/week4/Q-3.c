// given a unsotted array of integers design a algo and
//implement it using a program to find kth smallest or largest element in the array 

#include <stdio.h>

int main()
{
    int large, small;
    int a[5] = {2,4,3,9,3};
    
    large = a[0];
    small = a[1];
    
    if(small > large)
    {
        large = a[1];
        small = a[0] ;
    }
    
    for(int i = 2; i< 5; i++)
    {
        if(a[i] > large)
        large = a[i];
        
        if(a[i] < small)
        small = a[i];
       
    }

printf("largest is %d smallest is %d", large, small) ;
    return 0;
}
