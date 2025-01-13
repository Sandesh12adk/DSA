
#include<stdio.h>
#include<stdlib.h>
#define max 4
int stack_arr[max];
int top= -1;

//Push function
void push(int data){
	if(top== max-1){
		printf("Stack overflow failed to push %d\n",data);
		return;
	}
	top++;
	stack_arr[top]= data;
	printf("pushed %d to the top\n",data);
}
//Pop function
int pop(){
	if(top==-1){
		printf("Stack underflow occured:\n");
		exit(1);
	}
	int value= stack_arr[top];
	top--;
	printf("popped %d\n",value);
	return value;
}
// top function
int Top(){
	if(top==-1){
		printf("Top is empty\n");
	    exit(1);
	}
	printf("TOP Element:%d\n",stack_arr[top]);
	return stack_arr[top];
}
// isEmpty
bool isEmpty(){
if(top==-1){
	printf("Empty\n");
	return 1;
}	
else{
	printf("Not Empty\n");
return 0;
}
}
//isFull
bool isFull(){
	if(top== max-1){
		printf("Stack is full\n");
		return 1;
	}
	else{
		printf("Stack is not full\n");
		return 0;
	}
}
//Printing all the elements
void printAll(){
	if(top==-1){
		printf("Stack is Empty");
	}
	else{
		for(int i=top; i>=0; i--){
			printf("%d\t",stack_arr[i]);
		}
		printf("\n");
	}
}
int main(){
    int choice, data;
    while(1){
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("Enter your choice:\n");
        printf("1. push()\n");
        printf("2. pop()\n");
        printf("3. Top()\n");
        printf("4. isFull()\n");
        printf("5. isEmpty()\n");
        printf("6. printAll()\n");
        printf("7. exit()\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the data to push:\n");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                Top();
                break;
            case 4:
                isFull();
                break;
            case 5:
                isEmpty();
                break;
            case 6:
                printAll();
                break;
            case 7:
                exit(0);  // Properly exit the program
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

