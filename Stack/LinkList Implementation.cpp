//Linklist implemention of stack
#include<stdlib.h>
#include<stdio.h>
struct Node{
	int data;
	struct Node* link;
} *top= NULL;

//push function
void push(int data){
struct Node *temp;
temp= (struct Node*)malloc(sizeof(struct Node));
temp->data= data;
temp->link= top;
top=temp;
printf("pushed %d\n",data);
}
//pull function
int pull(){
	if(top==NULL){
		printf("Stack underflow:\n");
		exit(1);
	}
	struct Node* ptr;
	int data= top->data;
	ptr=top;
	top=top->link;
	free(ptr);
	printf("pulled %d successfully:\n",data);
	return data;
}
// Top function
int Top(){
	int data= top->data;
	printf("Top: %d\n",data);
	return data;
}
// isEmpty function
bool isEmpty(){
	if(top==NULL){
		printf("Stack is empty:\n");
			return 1;
	}
	else{
			printf("Stack is not empty:\n");
			return 0;
	}

}
//isFull function
bool isFull(){
	printf("Linklist can never be full:\n");
	return 0;
}
int main(){
    for(int i=0;i<7; i++){
    	push(i);
	}
	pull();
	Top();
	isEmpty();
	isFull();
	return 0;
}
