#include <stdio.h>
#include <math.h>

double ff(double x);
double df(double x);
double h=0.000000001,xi,xo;
int contador=1;


int main(){
	printf("Deme el valor inicial (Xo): ");
	scanf("%lf",&xo);
	while(fabs(ff(xo))>h){
		xi = xo - ff(xo)/df(xo);
		xo=xi;
		printf("\nValor obtenido en la iteracion No%2d es:%10.6lf",contador,xi);
		contador++;
	}
	printf("\n\n\nLa raiz calculada es: %10.6lf",xi);
	printf("\n\n\n\n");

}

double ff(double x){
	double y=((1+(3.592/(x*x)))*(x-0.04267)-24616.2);
	return y;
}

double df(double x){
	double y;
	double var=x+h;
	y = (((1+(3.592/(var*var)))*(var-0.04267)-24616.2) - ((1+(3.592/(x*x)))*(x-0.04267)-24616.2))/h;
	return y;
}

