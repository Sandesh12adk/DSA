//Creating the Binary Search Tree
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int key;
	struct Node* left;
	struct Node* right;
};
//Function to create the newNode
struct Node* newNode(int key){
	struct Node* newNode= (struct Node*) malloc(sizeof(struct Node));
	newNode->key=key;
	newNode->left= newNode->right= NULL;
	return newNode;
}
//Insertion Function
struct Node* insert(struct Node* node, int key){
	if(NULL==node){
		return newNode(key);
	}
	if(node->key==key){
		return node;
	}
	if(node->key<key){
		node->right=insert(node->right,key);
	}
	else{
		node->left=insert(node->left,key);
	}
	return node;
}
// Searcing functino 
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->key == key) {
        return root;  // Found the key or reached end
    }

    if (key < root->key) {
        return search(root->left, key);  // Search in left subtree
    } else {
        return search(root->right, key); // Search in right subtree
    }
}

// Function to display the BST (inorder traversal)
void display(struct Node* node) {
    if (node == NULL) {
        return;
    }
    display(node->left);
    printf("%d\t", node->key);
    display(node->right);
}
struct Node* search(struct Node* root, int key){
	if(NULL== root){
		return NULL;
	}
	if(root->key== key){
		return root;
	}
	if(root->key<key){
		return search(root->right,key);
	}
	else{
		return search(root->left,key);
	}
}
int main(){
	struct Node* root;
	root = newNode(50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    display(root);
    int data;
    printf("Enter -1 to exit");
    do{
    printf("Enter the data to search in the tree");
    scanf("%d",&data);
    if(NULL== search(root,data)){
    	printf("\n %d is not present\n",data);
	}
	else 
	printf("\n%d is present\n",data);
}while(data!=-1);
	return 0;
}
