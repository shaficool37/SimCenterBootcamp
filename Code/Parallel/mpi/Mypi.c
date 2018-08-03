#include <stdio.h>
static int long numSteps = 100000;

int main() {

double pi = 0; double time=0;
double delX=1.0/numSteps;


for (int i=0; i<numSteps; i++) {

double a=i*delX;
double b=(i+1)*delX;
double fx =0.5*((4.0/(1.+a*a))+(4.0/(1.+b*b)));

pi += fx*delX;


}

//printf("PI = %f, duration: %f ms\n",pi, time);
printf("PI = %f/n", pi);
return (0);
}
