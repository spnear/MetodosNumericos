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
	double y=(exp(-0.005*x)*cos(sqrt(2000-0.01*(x*x))*0.05)-0.01);
	return y;
}

double df(double x){
	double y;
	double var=x+h;
	y = ((exp(-0.005*var)*cos(sqrt(2000-0.01*(var*var))*0.05)-0.01) - (exp(-0.005*x)*cos(sqrt(2000-0.01*(x*x))*0.05)-0.01))/h;
	return y;
}

