#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define e 0.01

double f(double x) {
	return x*x*x - x*x + 2;
}

void biselekcja(double a, double b) {
	if(f(a)*f(b)>=0) {
		printf("Nie mozna dokonac bisekcji");
		return;
	}
	double c=a;
	while((b-a)>=e){
		c=(a+b)/2;
		if(f(c) == 0.0) {
			break;
		}
		else if (f(c)*f(a)<0) {
			b=c;
		} else {
			a=c;
		}
	}
	printf("x0 = %f\n",c);
}

int main(int argc,char *argv[]) {
	double a =0, b=1;
	biselekcja(a,b);
}
