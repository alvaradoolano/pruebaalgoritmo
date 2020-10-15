Algoritmo vacunadetipoABYCporJA
	Escribir "ingrese valor de edad:";
	Leer edad;
	Escribir "seleccione el valor del sexo.";
	Escribir "1.-mujer";
	Escribir "2.-varon";
	Leer sexo;
	//Proceso 
	si sexo<1 o sexo>2 Entonces
		Escribir "valor incorrecto. ingreselo nuevamente.:";
	FinSi
	si edad>=70 Entonces
		Escribir "C";
	FinSi
	si sexo=1 y edad>=16 y edad <70 Entonces
		Escribir "B";
	FinSi
	si sexo=2 y edad>=16 y edad<=70 Entonces
		Escribir "A";
	FinSi
	si edad<=16 Entonces
		Escribir "A";
	FinSi
	
	
	
	
	
	
FinAlgoritmo
