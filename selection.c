#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,j;
    int n,temp;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Ener %d elements:\n",(n));
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

    for(i=0;i<n-1;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("After sorting the array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",(arr[i]));
    }
    printf("\n");
}
