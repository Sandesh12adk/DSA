//Reversing string Using stack
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define max 10
char stack_arr[max];
int top= -1;

//Push function
void push(char ch){
	if(top== max-1){
		printf("Stack overflow failed to push %d\n",ch);
		return;
	}
	top++;
	stack_arr[top]= ch;
}
//Pop function
char pop(){
	if(top==-1){
		printf("Stack underflow occured:\n");
		exit(1);
	}
	char ch= stack_arr[top];
	top--;
	printf("%c",ch);
	return ch;
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
//	printf("Empty\n");
	return 1;
}	
else{
//	printf("Not Empty\n");
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
int main(){
	printf("Enter the string\n");
	char string[10];
	scanf("%s",string);
	printf("Original String: %s\n",string);
	printf("Reversed String:");
	for(int i=0;i<strlen(string); i++){
		push(string[i]);
	}
	while(!isEmpty()){
		pop();
	}
	return 0;
}
