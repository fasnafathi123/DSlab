#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int queue[MAX],front=-1,rear=-1;
void enqueue(){
int element;
if(rear==MAX-1){
	printf("Queue Overflow! Cannot enqueue more elements.\n");
	return;
}
printf("Enter the element to be enqueued.");
scanf("%d",&element);
if(front==-1){
	front=0;
	}
	rear++;
	queue[rear]=element;
	printf("%d enqueued to the queue.\n",element);
}
void dequeue(){
	if(front==-1||front>rear){
		printf("Queue Underflow!No elements to dequeue.\n");
		return;
	}
	printf("Dequeued element:%d\n",queue[front]);
	front++;
	if(front>rear){
		front=rear=-1;
	}
	}
void display(){
	int i;
	if(front==-1){
		printf("Queue is empty.\n");
		return;
	}
	printf("Queue elements are:\n");
	for(i=front;i<=rear;i++){
		printf("%d\n",queue[i]);
	}
}
void main()
{
	int ch;
	while(1){
		printf("\n---Queue Menu---\n");
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Exit\n");
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
			default:printf("Invalid choice!");
			}
		}
}
