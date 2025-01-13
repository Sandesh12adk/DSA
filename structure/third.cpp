//Returning structure from the function
#include<stdio.h>
struct person{
	int age;
};
struct person change(struct person per){
	(per.age)++;
	return per;
}
void print(struct person per){
	printf("%d\n",per.age);
}
int main(){
	struct person person1={22};
	printf("Initially \n");
	print(person1);
	person1= change(person1);
	printf("After modifying \n");
	print(person1);
	return 0;
}
