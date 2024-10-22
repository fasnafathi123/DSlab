#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int queue[MAX],front=-1,rear=-1,count=0;

void enqueue(){
	int element;
	if(count==MAX){
		printf("Circular queue is full!\n");
		return;
	}
	printf("Enter the element to be enqueued:");
	scanf("%d",&element);
	if(front==-1){
		front=0;
	}
	rear=(rear+1)%MAX;
	queue[rear]=element;
	count++;
	printf("%d enqueued to the queue.\n",element);
}

void dequeue(){
	if(count==0){
		printf("Circular queue is empty!");
		return;
	}
	printf("Dequeued element:%d\n",queue[front]);
	front=(front+1)%MAX;
	count--;
}
void display(){
	if(count==0){
		printf("\nCircular queue is empty!");
		return;
	}
	int j=front;
	printf("Queue elements are:\n");
	for(int i=0;i<count;i++){
		printf("%d\t",queue[j]);
		j=(j+1)%MAX;
	}
	printf("\n");
}
void main()
{
	int ch;
	while(1){
		printf("\n----Circular Queue Menu----\n");
		printf("\n1.Enqueue");
		printf("\n2.Dequeue");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:enqueue();
				break;
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4:exit(0);
			default:printf("\n Invalid choice!");
		}
	}
}
