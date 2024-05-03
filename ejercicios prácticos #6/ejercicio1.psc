Proceso ejercicio1
	imprimirNum();
FinProceso

Funcion imprimirNum()
	Definir n, suma, indice Como Entero;
	suma <- 0;
	Escribir "Ingrese un numero natural";
	Leer n;
	Para indice<-1 Hasta n Con Paso 1 Hacer
		suma <- suma + indice;
	FinPara
	Escribir "El resultado de la suma es igual a: ", suma;
FinFuncion
