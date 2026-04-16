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
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("The sum of elements in the array is %d",sum);
    float avg = (float)sum / n;
    printf("\nAverage = %.2f", avg);


    return 0;

    
}
