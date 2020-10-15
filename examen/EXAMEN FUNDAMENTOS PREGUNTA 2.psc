Algoritmo bonoenbaseapuntuacionJA
	Escribir "ingrese el valor de puntos:"
	Leer puntos;
	Escribir "salario minimo:"
	Leer salariominimo;
	//Proceso 
	si puntos<=100 Entonces
		aumento<-salariominimo*0.1
		Escribir "el 10% es:",aumento
		sueldototal=salariominimo+aumento
	FinSi
	si puntos>100 y puntos<=150 Entonces
		aumento<-salariominimo*0.5
		Escribir "el 50% es:",aumento
		sueldototal=salariominimo+aumento
	FinSi
	si puntos>150 Entonces
		aumento<-salariominimo*0.8
		Escribir "el 80% es:",aumento
		sueldototal=salariominimo+aumento
	FinSi
	Escribir "sueldo total es:",sueldototal;
	
FinAlgoritmo
