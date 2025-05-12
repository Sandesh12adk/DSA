#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to add a node at the end
struct Node* addAtEnd(struct Node* head, int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }
    
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;

    // Case 1: If the list is empty.
    if (head == NULL) {
        return temp;
    }

    struct Node* ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->prev = ptr;
    printf("Successfully added at the end\n");

}
// Function to addAt the begnning.
struct Node* addAtBeg(struct Node* head, int data){
	if(NULL== head){
		printf("List is Empty");
		return head;
	}
	struct Node* newNode= (struct Node*) malloc(sizeof(struct Node));
	if(NULL== newNode){
		printf("Memory allocation Failed");
		return head;
	}
	newNode->prev= NULL;
	newNode->data= data;
	newNode->next= head;
	head->prev= newNode;
	head= newNode;
	printf("Successfully added at the beg\n");
	return head;
}

//Function to add the Node at the specific position
void addAt(struct Node* head,int position ,int data){


	if(position==1){
		//addAtBeg(head,data);
	}
	struct Node *temp, *ptr, *newNode;
	newNode= (struct Node*) malloc(sizeof(struct Node));
	newNode->data= data;
	ptr= head;
	for(int i=1; i<position; i++){
		temp= ptr;
		ptr= ptr->next;
	}
	temp->next= newNode;
	newNode->prev= temp;
	newNode->next= ptr;
	ptr->prev= newNode;	
}
// Functoin to count the Nodes
int count(struct Node* head){
	int count= 0;
	if(head==NULL){
		printf("The List is Empty");
		return count;
	}
	struct Node* ptr= head;
	while(ptr!=NULL){
		count++;
		ptr= ptr->next;
	}
	printf("The total Nodes: %d",*&count);
	return count;
}
// Function to print the list
void printList(struct Node* head) {
    struct Node* ptr = head;
    printf("Doubly Linked List:\n");
    while (ptr != NULL) {
        printf("%d <-> \t", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
// Function to delete the First Node
struct Node* deleteFirstNode(struct Node* head){
	if(NULL== head){
		printf("List is Empty.");
		return head;
	}
	struct Node* temp= head;
	head=head->next;
	head->prev= NULL;
	free(temp);
	return head;
}
//Function to delete the last NOde
void deleteLastNode(struct Node* head){
	struct Node *ptr, *temp;
	ptr=head;
	while(ptr->next!=NULL){
	    temp=ptr;
		ptr=ptr->next;
	}
	free(ptr);
	temp->next= NULL;
}
//Function to delete at  the Specific Position
void deleteAt(struct Node* head, int position){
	struct Node *ttr, *ptr, *temp;
	temp= head;
	ptr=head; // To avaoid the garvage value at fire loop
	for(int i=0;i<position;i++){
		ttr=ptr;
		ptr=temp;
		temp=temp->next;
	}
	ttr->next= ptr->next;
	temp->prev= ptr->prev;
	free(ptr);
}
int main() {
    struct Node* head = NULL;
    head= (struct Node*) malloc(sizeof(struct Node));
    head->prev= NULL;
    head->data= 0;
    head->next= NULL;
    head=addAtBeg(head,1);
    head=addAtBeg(head,2);
    head=addAtBeg(head,3);
    printList(head);
    addAtEnd(head,4);
    addAtEnd(head,5);
    addAtEnd(head,6);
    printList(head);
    count(head);
    head=deleteFirstNode(head);
    count(head);
    printList(head);
    deleteLastNode(head);
    count(head);
    printList(head);
    addAt(head,2,333);
    count(head);
    printList(head);
    deleteAt(head,4);
    count(head);
    printList(head);
     addAt(head,3,11111);
    count(head);
    printList(head);
    return 0;
}

