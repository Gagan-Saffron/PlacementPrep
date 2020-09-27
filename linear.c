#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int n,i,k;
	int a[25];

	printf("Enter the number of elements: ");
	scanf("%d",&n);

	printf("Enter %d elements int array-\n",(n));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the element to be searched: ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("Element is found at position %d\n",(i));
			exit(0);
		}
	}
	printf("The element is not found in the array..\n");
}
