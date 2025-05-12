#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[10],position,n;
	printf("Enter the size\n");
	scanf("%d",&n);
	for(int i=0; i<n;i++){
		arr[i]=i;
	}
	printf("Array Before Deletion\n");
	for(int i=0; i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("Enter the Position for deletion\n");
	scanf("%d",&position);
	for(int i= position; i<n; i++){
		arr[i-1]=arr[i];
	}
	printf("Array After Deletion\n");
	for(int i=0; i<n-1;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
