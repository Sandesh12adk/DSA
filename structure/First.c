//Passing Structure member as argument to the function
#include<stdio.h>
struct person{
	char name[10];
	char address[10];
	float height;
};

void print(char name[], char address[], float height){
	printf("%s %s %0.1f", name, address, height);
}
void change(char *name, char *address, float * height){
      strcpy(name, "keshab");
    strcpy(address, "pokhara");
    *height = 5.9; // Dereference to modify the actual value
}
int main(){
	struct person person1={"sandesh","Lahachok",5.8};
	// passing by variable
	print(person1.name,person1.address, person1.height);
	//passibg by refrence
	change(&person1.name, &person1.address, &person1.height);
	printf("After changing\n");
    print(person1.name,person1.address, person1.height);
	return 0;
}
