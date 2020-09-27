#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int n,i,k;
	int a[25];
	int l,m,r;

	printf("Enter the number of elements: ");
	scanf("%d",&n);

	printf("Enter %d elements int array-\n",(n));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the element to be searched: ");
	scanf("%d",&k);
	
	l=0;
	r=n-1;

	while(l<=r)
	{
		m=(l+r)/2;

		if(k==a[m])
		{
			printf("Element found at index %d\n",(m));
			exit(0);
		}
		else if(k<a[m])
			r=m-1;
		else
			l=m+1;
	}

	printf("The element is not found in the array..\n");
}
