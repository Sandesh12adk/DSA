//Returning Structure pointer from the function
#include<stdio.h>
struct data{
	int a;
	int b;
	int c;
};
   struct data* fun(int x, int y, int z){
   struct data* ptr= (struct data*) malloc(sizeof(struct data));
   ptr->a= x;
   ptr->b=y;
   ptr->c= z;
   return ptr;
   }
  void print(struct data* dat){
   	printf("%d %d %d\n",dat->a, dat->b, dat->c);
   }
int main(){
	struct data *ptr1;
	ptr1= fun(1,10,100);
	print(ptr1);
	return 0;
}
