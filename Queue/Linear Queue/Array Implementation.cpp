//Array Implementation of Queue
#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size];
int front=-1;
int rear= -1;
//Enqueue
void enQueue(int data){
if(front==-1 && rear==-1){
	front=rear=0;
	queue[rear]= data;
	printf("Inserted %d\n",data);
}
else if(rear>= (size-1)){
	printf("Queue is Full\n");
}
else{
rear++;
queue[rear]= data;
printf("Inserted %d\n",data);	
}
}
void deQueue(){
	if(front==-1 && rear==-1){
		printf("Queue is Empty\n");
	}
	else if(front>rear){
		printf("Queue is Empty\n");
		front=rear=-1;
	}
	else{
		printf("%d",queue[front]);
		front++;
	}
}
	bool isFull(){
		if(rear=(size-1)){
			return true;
		}
		return false;
}
bool isEmpty(){
	if(front==-1 || front>rear){
		return true;
	}
	return false;
}

int main(){
	for(int i=0; i<12; i++){
	enQueue(i*3-1);
}
	for(int i=0; i<15; i++){
	deQueue();
}
	enQueue(258);
	deQueue();
	
	return 0;
}
