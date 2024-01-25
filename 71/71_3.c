#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define epsilon 1e-14 

double f(double x) {
	double result;
	
	if(x<=1) {
		result = -1.00000 + 1.80861*(x) + 0.00000*(x*x) + 0.19139*(x*x*x);
	} else if ( x>1 && x<=2) {
		result = 1.14833 + -4.63636*(x) + 6.44498*(x*x) + -1.95694*(x*x*x);	
	} else if (x>2 && x<=3) {
		result = -51.59809 + 74.48325*(x) + -33.11483*(x*x) + 4.63636*(x*x*x);
	} else if (x>3 && x<=4) {
		result = 224.47368 + -201.58852*(x) + 58.90909*(x*x) + -5.58852*(x*x*x);
	} else if (x>4 && x<=5) {
		result = -307.12440 + 197.11005*(x) + -40.76555*(x*x) + 2.71770*(x*x*x);
	}
	return result;
}

void bisekcja(double a, double b) {
	if (f(a)*f(b)>=0) {
		printf("Nie mozna dokonac bisekcji\n");
		return;
	}
	double c=a;
	while((b-a)>=epsilon){
		c=(a+b)/2;
		if(f(c)==0.0) {
			break;
		} else if(f(c)*f(a)<0) {
			b=c;
		} else {
			a=c;
		}
	}
	printf("x0 = %.5f\n",c);
}

void minmax(double min, double hi, double step) {
	while(min<=hi) {
		min+=step;	
		f(min);
	}
}

int main(int argc,char *argv[]) {
	//minmax(0.0000,5.0000,0.00001);
	for(double x=0.0; x<5.0; x+=1.0) {
		if(f(x)*f(x+1.0)<0.0) {
			bisekcja(x,x+1.0);	
		}
	}
}
