#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* addToEmpty(int data){
	struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=newNode;
     return newNode->next;
}

//Function to add at the last of the list
struct Node* addToLast(struct Node* tail,int data){
	if(tail==NULL){
		tail= addToEmpty(data);
		return tail;
	}
	else{
		struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
		newNode->data=data;
		struct Node *head= tail->next;
		newNode->next= head;
		tail->next= newNode;
		tail= newNode;
		return tail;
			}
}
//Function to add the the begining of the List
struct Node* addToBeg(struct Node* tail, int data){
	if(tail==NULL){
		return addToEmpty(data);
	}
	else{
	struct Node* head= tail->next;
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data= data;
	newNode->next=tail->next;
	tail->next= newNode;
	return tail;
	}
}
int display(struct Node* tail){
	int count=0;
	struct Node* head= tail->next;
	struct Node* ptr= head;
	printf("LinkedList:");
	do{
		count++;
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
	printf("first");
	printf("\n");
}
int main(){
	struct Node* tail= NULL;
	tail= addToEmpty(0);
	tail= addToBeg(tail,3);
	tail= addToBeg(tail,2);
	tail= addToBeg(tail,1);
	display(tail);
	tail=addToLast(tail,4);
	display(tail);
	return 0;
}
