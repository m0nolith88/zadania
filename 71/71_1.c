#include <math.h>
#include <stdio.h>

#define step 0.001

double licz(double x) {
	double a1=1.14833,a2=-4.63636,a3=6.44498,a4=-1.95694;
	double value;
	if(x <= 1) {
		value = (-1.00000 + 1.80861*(x)+0.00000*(x*x) +0.19139*(x*x*x));
	} else if (x >=1 && x <= 2) {
		value = (a1 + a2*(x)+a3*(x*x) +a4*(x*x*x));
	} else if (x >=2 && x <= 3) {
		value = (-51.59809 + 74.48325*(x)+-33.11483*(x*x) +4.63636*(x*x*x));
	} else if (x >=3 && x <= 4) {
		value = (224.47368 + -201.58852*(x)+58.90909*(x*x) +-5.58852*(x*x*x));
	} else if (x >=4 && x <= 5) {
		value = (-307.12440 + 197.11005*(x)+-40.76555*(x*x) +2.71770*(x*x*x));
	}
	printf("f(%.3f)=%.3f\n",x,value);
	
	return value;
}

void maksymalna(double min,double max){
	double temp=min;
	double m=1000,x=0.0000,current;
	while(temp<max-step) {
		temp+=step;
		current=licz(temp);
		if(current > x) {
			current = x;	
		} 
		if(current < m) {
			current = m;
		}
	}
	printf("Max:%f\n", m);
}


int main(int argc,char *argv[]){
	/*double x=1.5;
	double a1=1.14833,a2=-4.63636,a3=6.44498,a4=-1.95694;
	double value = (a1 + a2*(x)+a3*(x*x) +a4*(x*x*x));
	printf("Wynik to %.5f\n",value);*/
	maksymalna(0.000,5.000);
}


