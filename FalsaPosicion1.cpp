#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double fx(double x1);

int main() {
 double m,a,b,error=0.000001;
 printf("Ingrese el valor de a: ");
 scanf("%lf",&a);
 printf("Ingrese el valor de b: ");
 scanf("%lf",&b);
 m=a;

 while (fabs(fx(m))>error)
 {
  m=((a*fx(b))-(b*fx(a)))/(fx(b)-fx(a));
  if (fx(a)*fx(m)>=0){
  a=m;}
  else {
   b=m;}
  printf("\nLa ráiz intermedia es: %20.6lf",m);
 }
 printf("\n");
 return 0;
}

double fx(double x1){
	double y;
	y=((1+(3.592/(x1*x1)))*(x1-0.04267)-24616.2);
	return y;
}
