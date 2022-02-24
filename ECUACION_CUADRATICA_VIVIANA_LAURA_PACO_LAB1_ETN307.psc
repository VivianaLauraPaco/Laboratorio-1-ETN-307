Algoritmo ECUACION_CUADRATICA_VIVIANA_LAURA_PACO_LAB1_ETN307
	Escribir " Leer a,b,c " ;
	Leer a , b, c;
	D=b*b-4*a*c;
	Si a<>0 Entonces
		Si D>=0 Entonces
			x1=(-b+raiz(D))/(2*A)
			X2=(-b-raiz(D))/(2*A)
			Escribir "x1 = ",x1;
			Escribir "x2 = ",x2;
		SiNo
			x=-b/(2*a)
			m= raiz (-D)/(2*a)
			Escribir "x1 = ",x,"+",m,"i"
			Escribir "x2 = ",x,"-",m,"i"
			
		Fin Si
	SiNo
		Si b<>0 Entonces
			p=-c/b;
			Escribir "x = ",p;
			
			
		SiNo
			Si c=0 Entonces
				Escribir " Infinitas Soluciones "
			SiNo
				Escribir " No Hay Solucion "
			Fin Si
			
			
		Fin Si
		
		
		
		
	Fin Si
	
	
	
	
	
	
FinAlgoritmo
