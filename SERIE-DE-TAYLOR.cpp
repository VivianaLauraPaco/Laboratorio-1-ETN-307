/*PROGRAMA PARA LA SERIE DE TAYLOR DE LA FORMA:
// VIVIANA LAURA PACO  C.I 70991538
//f(x)=1+x/1!+x^2/2!+x^3/3!+...+x^n/n! funcion e^x*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

double Taylor(double x, int n);
double Factorial(int n);

int main(){
	int n;
	double x;
	cout<<"Programa para calcular e^x"<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<"Ingrese el numero de terminos: ";
	cin>>n;
	cout<<"Ingrese el valor de 'x': ";
	cin>>x;
	cout<<"El valor de la serie de Taylor es: "<<endl;
	cout.precision(10);
	cout<<"F(x)= "<<Taylor(x,n);
	return 0;
}

double Taylor(double x, int n){
	double t,s=0;
	for(int i=0;i<n;i++) {
		t=pow(x,i)/Factorial(i);
		s=s+t;
	}
   return(s);
}

double Factorial(int n){
	double fac=1;
	for(int i=1;i<=n;i++) {
		fac=fac*i;
   }
   return(fac);
}
