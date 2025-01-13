//Passing the array of structure to the functin as the argument
#include<stdio.h>
struct data{
	int a;
	int b;
};
void print(struct data arr[], int size){
	for(int i=0; i<size; i++){
		printf("%d %d\n",arr[i].a,arr[i].b);
	}
}
int main(){
	struct data dat[3]={{1,10},{10,100},{100,1000}};
	int size= sizeof(dat)/sizeof(dat[0]);
	print(dat,size);
	return 0;
}
