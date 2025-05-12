#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[10],n,position,x;
	printf("Enter the no of elements in the array\n");
	scanf("%d",&n);
	for(int i=0; i<n;i++){
		arr[i]=i;
	}
	printf("Elements in the array Before Insertion\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("Enter the element and the Position for insertion\n");
	scanf("%d %d",&x,&position);
	for(int i=n;i>(position-1);i--){
		arr[i]=arr[i-1];
	}
	arr[position-1]=x;
		printf("Elements in the array After Insertion.\n");
	for(int i=0;i<n+1;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
