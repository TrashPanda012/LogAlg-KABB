Proceso ejercicio3
	sumaCuadrados();
FinProceso

Funcion sumaCuadrados()
	Definir suma, indice Como Entero;
	suma<-0;
	Para indice <- 0 Hasta 100 Con Paso 1 Hacer
		suma <- suma + (indice * indice);
	FinPara
	Escribir "La suma del cuadrado de cada numero es igual a: ", suma;
FinFuncion
	