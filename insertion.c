#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,j;
    int n;
    int value,hole;
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

    for(i=1;i<n;i++)
    {
        value=arr[i];
        hole=i;
        
        while(hole>0 && value<arr[hole-1])
        {
            arr[hole]=arr[hole-1];
            hole=hole-1;
        }
        arr[hole]=value;
    }
    printf("After sorting the array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",(arr[i]));
    }
    printf("\n");
}
