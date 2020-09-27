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

    for(i=0;i<n;i++)
    {
        for(j=1;j<(n-i);j++)
        {
            if(arr[j-1]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
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
