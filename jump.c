#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int n,i,k;
	int a[25];
	int l,r,m;

	printf("Enter the number of elements: ");
	scanf("%d",&n);

	printf("Enter %d elements int array-\n",(n));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the element to be searched: ");
	scanf("%d",&k);

	m=sqrt(n);
	l=0;
	r=l+m;

	while(r<=n-1)
	{

		if(k<=a[r])
		{
			for(i=l;i<=r;i++)
			{
				if(a[i]==k)
				{
					printf("Elememnt is found at %d",(i));
					exit(0);
				}
			}
		}
		
		l=r+1;
		r=l+m;
	}
	
	printf("The element is not found in the array..\n");
}
