
#include<stdio.h>

int main()
{

    int n, key, c=0;

    printf("Enter total numbers you want to enter \n");
    scanf("%d",&n);

      int a[n] ;


for (int i= 0; i<n; i++)
{
    scanf("%d",&a[i]);
}

printf("Enter the key number \n");

scanf("%d",&key);

    for(int i=0; i<n; i++)
    {
        c++ ;

        if(key == a[i])
        {
            printf("key is present at index %d", i);
            printf("total number of comparisons %d",c);
           break;
        }
    }
    if(key != a[n-1])
    {printf("-1");
    printf("total comparisons %d",c);
    }
    return 0;
}
