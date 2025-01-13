//Self referential pointer
#include<stdio.h>
struct demo{
	int a;
	struct demo *ptr;
};
int main(){
	struct demo ptr1, ptr2;
	ptr1.a= 1;
	ptr1.ptr= NULL;
	ptr2.a= 2;
	ptr2.ptr= NULL;
	ptr1.ptr= &ptr2;
	printf("%d\n",ptr1.ptr->a);
	return 0;
}
