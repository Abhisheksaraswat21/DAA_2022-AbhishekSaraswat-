
#include<stdio.h>

int fun(int a[], int key, int i, int j)
{

if(j>=i)
{
  int mid = i+(j-1)/2 ;



     if(a[mid] == key)
    return mid ;

    else if( key < a[mid] )
     return fun(a,key,i,mid-1);

    else
       return fun(a,key,mid+1, j);

}
return -1;
}

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
           break;
        }

    }

      printf("total number of comparisons %d\n",c);



    int result =
    fun(a,key,0,n-1);



    if(result == -1) {
        printf("elemnt not present"); }
    else
    {
       printf("element is present at %d",result);
    }


      return 0;


}

