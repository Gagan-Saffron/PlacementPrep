#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void merg(int *a)
{

}

void mergsort(int *a,int s,int e)
{
if(s>=e)
return;

int mid=(s+e)/2;



}

int main()
{
    int arr[100];
    int n;
    int i;
    
    printf("Enter the number of eleemnts: ");
    scanf("%d",&n);

    printf("Enter %d elements into array:\n",(n));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

     printf("Before sorting the array\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",(arr[i]));
    }
    printf("\n");


    mergsort(arr,0,n-1);

     printf("After sorting the array\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",(arr[i]));
    }
    printf("\n");

}