//Inserting at the start of the array
#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[10],n,x;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	arr[i]=i;
	}
		printf("Elements in the arrray Before\n");
		for(int i=0;i<n;i++){
	printf("%d\t",arr[i]);
}
printf("Enter the data to be inserted at the begining\n");
scanf("%d",&x);
for(int i=n; i>0; i--){
	arr[i]=arr[i-1];
}
arr[0]=x;

	printf("Elements in the arrray after\n");
		for(int i=0;i<n+1;i++){
	printf("%d\t",arr[i]);
}

}
