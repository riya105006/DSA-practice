#include<stdio.h>
int main()
{
    int n,i;
  
    printf("enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all the elements of the array\n");
    for( i=0;i<n;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The maximum element in the given array is %d",max);


    return 0;

    
}
