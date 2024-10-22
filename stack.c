#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int stack[MAX],top=-1;

void push(){
	int element;
	if(top==MAX-1){
		printf("Stack Overflow\n");
		return;
	}
	printf("Enter the element to be pushed:");
	scanf("%d",&element);
	top++;
	stack[top]=element;
	printf("%d pushed to the stack.\n",element);
	}
void pop(){
	if(top==-1){
		printf("Stack Underflow\n");
		return;
	}
	printf("Popped element:%d\n",stack[top]);
	top--;
}
void display()
{
	int i;
	if(top==-1){
		printf("Stack is empty.");
		return;
	}
	printf("Stack elements are:\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}

}
void main()
{
	int ch;
	while(1){
		printf("\n Stack Operations");
		printf("\n 1.PUSH");
		printf("\n 2.POP");
		printf("\n 3.DISPLAY");
		printf("\n 4.EXIT");
		printf("\n Enter your choice:");
		scanf("%d",&ch);

	switch(ch){
		case 1:push();
			break;
		 case 2:pop();
                        break;
		 case 3:display();
                        break;
		case 4:exit(0);
		default:
			printf("\n Invalid choice");
		}
		}

}
