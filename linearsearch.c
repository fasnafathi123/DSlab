#include<stdio.h>
void main()
{
	int a[50],i,n,item,flag=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			printf("%d present at %d",item,i);
			flag=1;
		}
		if(flag==-1)
		{
			printf("Item is not found.");
		}
	}
}

