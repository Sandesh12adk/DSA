// Rk-4th order
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double f(double x, double y){
	return (2*x+y);
}
void RK(double xi, double yi,double xcor, double h){
	double x,y,k1,k2,k3,k4,k;
	x=xi;
	y=yi;
	printf("x                   y\n");
	do{
		printf("%lf             %lf\n",x,y);
		k1=f(x,y);
		k2=f(x+(h/2),y+(k1/2));
		k3=f(x+(h/2),y+(k2/2));
		k4=f(x+h,y+k3);
		k= k1+2*k2+ 2*k3+ k4;
		x+= h;
		y+= (h/6)*k;
	}while(x<xcor);
}
int main(){
	double xi, yi,xcor,h;  // xcor mean the value of x for which we have to find the y
	printf("Enter the initial value x, y and the valye for which we y is to be calculated and h");
	scanf("%lf %lf %lf %lf",&xi,&yi,&xcor,&h);
	RK(xi,yi,xcor,h);
	return 0;
}
