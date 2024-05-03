Proceso ejercicio10
	Definir filas, columnas, i, j Como Entero;
	Definir matriz Como Entero;
	Dimension matriz[100,100];
	Definir longitud_maxima Como Entero;
	longitud_maxima <- 100;
	
	Escribir "Ingrese el numero de filas de la matriz:";
	Leer filas;
	Escribir "Ingrese el numero de columnas de la matriz:";
	Leer columnas;
	
	Si filas <= 0 O filas > longitud_maxima Entonces
        Escribir "Error: Longitud no valida.";
	SiNo
		Si columnas <= 0 O columnas > longitud_maxima Entonces
			Escribir "Error: Longitud no valida.";
		SiNo
			// Solicitar al usuario ingresar los elementos de la matriz
			Escribir "Ingrese los elementos de la matriz:";
			Para i <- 1 Hasta filas Con Paso 1 Hacer
				Para j <- 1 Hasta columnas Con Paso 1 Hacer
					Escribir "Elemento [", i, "][", j, "]: ";
					Leer matriz[i,j];
				FinPara
			FinPara
			
			// Calcular la transposición de la matriz
			Definir matrizTranspuesta Como Entero;
			Dimension matrizTranspuesta[100,100];
			Para i <- 1 Hasta columnas Con Paso 1 Hacer
				Para j <- 1 Hasta filas Con Paso 1 Hacer
					matrizTranspuesta[i,j] <- matriz[j,i];
				FinPara
			FinPara
			
			// Mostrar la matriz transpuesta como salida
			Escribir "La matriz transpuesta es:";
			Para i <- 1 Hasta columnas Con Paso 1 Hacer
				Para j <- 1 Hasta filas Con Paso 1 Hacer
					Escribir matrizTranspuesta[i,j], " ";
				FinPara
				Escribir "";
			FinPara
		FinSi
	FinSi
FinProceso
