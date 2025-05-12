// Creating the Link List
// Counting the Nodes in the list
//Adding the node at the end of the list
//Adding the node at the begining of the list
// Printing the data from the each Node of the List
//Inserting at specific position of the List
//Deleting the first Node
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int a;
	struct Node* link;
};
    // Function to count the number of nodes in the list
   int countNodes(struct Node* head){
   	int count= 0;
   	if(head== NULL){
   		printf("List is empty");
   		return 0;
	   }
	   else{
	   	while(head!= NULL){
	   		count++;
	   		head= head->link;
		   }
		    printf("Total Nodes: %d\n",count);
		    return count;
	   }
   }
   
   // Function to add the Node at the end of the list
   void addAtEnd(struct Node* head){
   	struct Node* temp;
   	temp= head;
   	while(temp->link!= NULL){
   		temp=temp->link;
	   }
	   struct  Node *ptr;
	   ptr= (struct Node*) malloc(sizeof(struct Node));
	   ptr->a= 5;
	   ptr->link= NULL;
	   temp->link= ptr;
	   printf("Node has Successfully added at the end.\n");
   }
   // Function to add the node at the begining of the list
   struct Node* addAtBeg(struct Node* head){
   	struct Node  *ptr;
   	ptr= (struct Node*) malloc(sizeof(struct Node));
   	ptr->a= 0;
   	ptr->link= head;
   	head= ptr;
   	printf("Node has Successfully added at the Begining.\n");
   	return head;
   }
   // Function to print data of the link list
   void data(struct Node* head){
   	if(head== NULL){
   		printf("List list is Empty\n");
	   }
	   else{
	   	struct Node* temp;
	   	temp= head;
	   	while(temp!=NULL){
	   		printf("%d\t",temp->a);
	   		temp= temp->link;
		   }
		   printf("\n");
	   }
   }
   // Inserting at any position in the List
struct Node* addAtSpecific(struct Node* head, int position) {
    int currentPosition = 1;
    int count = countNodes(head);
    if (position < 1 || position > count + 1) {
        printf("Invalid position, the List has only %d Nodes from 1-%d\n", count, count);
        return head;
    }
    else if (position == 1) {
        head = addAtBeg(head);
        return head;
    }
    else {
        struct Node* temp = head;
        while (currentPosition < position - 1) {
            temp = temp->link;
            currentPosition++;
        }
        struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
        ptr->a = position;  // Value to insert
        ptr->link = temp->link;
        temp->link = ptr;
        printf("Node has been added at position %d.\n", position);
        return head;
    }
}
    //Deleting the first Node
    struct Node* deleteFirstNode(struct Node* head){
    	struct Node* temp= head->link;
    	free(head);
    	printf("First Node deleted\n");
    	return temp;
	}
	//Deleting the Last Node
	 void deleteLastNode(struct Node* head){
	  	struct Node* temp;
	  	struct Node* ptr= head;
	  	while(ptr->link!= NULL){
	  		temp= ptr;
	  		ptr=ptr->link;
		  }
		  free(ptr);
		   ptr= NULL;
		 temp->link= NULL;
		  	printf("Last Node deleted\n");
	}
	//Deleting the Node at the specific position
struct Node* deleteAtSpec(struct Node* head, int position){
	int count= 1;
	struct Node *temp, *ptr;
	ptr= head;
	while(count<position){
		count++;
	    temp= ptr;
		ptr=ptr->link;
	}
	temp->link= ptr->link;
	free(ptr);
	return head;
}

	//Deleting All the Nodes
	struct Node* deleteAllNodes(struct Node* head){
		struct Node *temp, *ptr;
		ptr= head;
		while(ptr!=NULL){
			temp = ptr;
			ptr= ptr->link;
			free(temp);
			temp= NULL;
			 countNodes(ptr);
		}
			printf("Entire List has deleted\n");
			return NULL;
	}
	void display(struct Node* head){
	struct Node *ptr= head;
	printf("LinkedList:");
	while(ptr!=NULL){
		printf("%d->",ptr->a);
		ptr=ptr->link;
	}
	printf("NULL");
	printf("\n");
}
int main(){
	// Creating the first Node
	struct Node* head;
	head= (struct Node*) malloc(sizeof(struct Node));
	head->a= 1;
	head->link= NULL;   
	// Creating the second Node
	struct Node* current;
    current= (struct Node*) malloc(sizeof(struct Node));
    current->a= 2;
    current->link= NULL;
    head->link= current;
    // Creating the third Node
    current= (struct Node*) malloc(sizeof(struct Node));
    current->a= 3;
    current->link= NULL;
    head->link->link= current;
    //Creating the fourth Node
    current= (struct Node*) malloc(sizeof(struct Node));
    current->a= 4;
    current->link= NULL;
    head->link->link->link= current;
    countNodes(head);
    addAtEnd(head);
    countNodes(head);
    head= addAtBeg(head);
    countNodes(head);
    data(head);
     display(head);
    addAtSpecific(head,5);
    countNodes(head);
    data(head);
    head=deleteFirstNode(head);
     countNodes(head);
      data(head);
      deleteLastNode(head);
       countNodes(head);
        data(head);
       

          return 0;
}
