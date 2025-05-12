// Write an algoritiirn to llnd n'h Fibonacci number using tail recursion. 
#include<stdio.h>
#include<stdlib.h>
int fibo(int n, int a, int b){
if(n==1){
	return a;
}
if(n==2){
	return b;
}
return fibo(n-1,b,a+b);
}
int main(){
	int n;
	printf("Enter which term you want to check\n");
	scanf("%d",&n);
	int term= fibo(n,0,1);
	printf("%d",term);
	return 0;
}
