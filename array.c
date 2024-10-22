#include<stdio.h>
#include<stdlib.h>
int n,a[50];
void display(){
	int i;
	if(n==0){
		printf("Array is empty!\n");
		return;
	}
	printf("Array elements are:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n------\n");
}
void insertion()
{
	int i,pos,element;
	if(n>=50)
	{
		printf("Array is full.");
		return;
	}
	printf("Enter the position you want to insert the value:",n);
	scanf("%d%d",&pos,&element);
	if(pos<0 || pos>n){
		printf("\nInvalid position.");
		return;
	}
	n++;
	for(i=n-2;i>=pos;i--){
		a[i+1]=a[i];
	}
	a[pos]=element;
	printf("Array after insertion:\n");
	display();
}
void deletion(){
	int i,pos;
	if(n==0){
		printf("Array is empty!");
		return;
	}
	printf("Enter the position of the element to be deleted:",n-1);
	scanf("%d",&pos);
	if(pos<0 || pos>=n){
		printf("\n Invalid position!");
		return;
	}
	int element =a[pos];
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("Deleted element:%d\n",element);
	printf("Array after deletion:\n");
	display();
}
void main()
{
	int ch,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(1){
		printf("\n---Array Operations---");
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\n.Enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:insertion();
				break;
			case 2:deletion();
				break;
			case 3:display();
				break;
			case 4:exit(0);
			default:printf("Invaid Choice.\n");
			}
		}
}
