Algoritmo incrementosalario
	Definir salario Como real
	Definir x,años Como Entero
	//datos de entrada
	Escribir "dame el salario"
	Leer salario
	Escribir "a cuantos años deseas realizar el calculo"
	Leer años
	x=1
	//Proceso 
	si x<=años Entonces
		salario=salario+(salario*.10)	
		Escribir "el salario en el año",x,"es de:",salario
		x=x+1
	FinSi
	
	
	
FinAlgoritmo
