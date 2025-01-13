//Passing structure variale as an argument
#include<stdio.h>
struct person{
    char name[10];
    int age;
};
void print(struct person per){
	printf("%s %d\n",per.name,per.age);
}
int main(){
	struct person person1={"Sandesh",22};
	struct person person2={"Keshab",19};
	print(person1);
	print(person2);
	return 0;
}
