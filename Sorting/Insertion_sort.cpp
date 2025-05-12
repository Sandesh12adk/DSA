#include<stdio.h>
#include<stdlib.h>

int main(){
 int a[10] = {10,3,8,9,5,6,4,2,7,1};
 int j;
 int temp;
// InsertSort algorithm
for(int i=1;i<10;i++){
	temp= a[i];
	j=i-1;
	while(j>=0 && a[j]>temp){
		a[j+1]= a[j];
		j--;
	}
	a[j+1]= temp;
}
for(int i=0; i<10; i++){
	printf("%d\t",a[i]);
}
	return 0;
}
