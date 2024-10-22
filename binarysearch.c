#include<stdio.h>
void main()
{
	int a[50],i,n,item,mid,first,last;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements in increasing order:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&item);
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last){
		if(a[mid]<item){
			first=mid+1;
		}
		else if(a[mid]==item){
			printf("\n Item present at index %d.",mid+1);
			break;
		}

		else
			last=mid-1;
	}
	if(first>last)
		printf("Item not found.",item);

}

