Algoritmo incrementosalario
	Definir salario Como real
	Definir x,a�os Como Entero
	//datos de entrada
	Escribir "dame el salario"
	Leer salario
	Escribir "a cuantos a�os deseas realizar el calculo"
	Leer a�os
	x=1
	//Proceso 
	si x<=a�os Entonces
		salario=salario+(salario*.10)	
		Escribir "el salario en el a�o",x,"es de:",salario
		x=x+1
	FinSi
	
	
	
FinAlgoritmo
