Proceso ejercicio9

Definir filas1, columnas1, filas2, columnas2 Como Entero;
Definir i, j, k Como Entero;
Definir  longitud_maxima Como Entero;
longitud_maxima <- 100;
Escribir "Ingrese el numero de filas de la primera matriz:";
Leer filas1;
Escribir "Ingrese el numero de columnas de la primera matriz:";
Leer columnas1;
			
Escribir "Ingrese el numero de filas de la segunda matriz:";
Leer filas2;
Escribir "Ingrese el numero de columnas de la segunda matriz:";
Leer columnas2;
			
Si columnas1 <> filas2 Entonces
	Escribir "Error: Las dimensiones de las matrices no son compatibles para la multiplicacion.";
SiNo
	Si columnas1 <= 0 O columnas1 > longitud_maxima Entonces
		Escribir "Error: Longitud no valida.";
	SiNo
		Si columnas2 <= 0 O columnas2 > longitud_maxima Entonces
			Escribir "Error: Longitud no valida.";
		SiNo
			Si filas1 <= 0 O filas1 > longitud_maxima Entonces
				Escribir "Error: Longitud no valida.";
			SiNo
				Si filas2 <= 0 O filas2 > longitud_maxima Entonces
					Escribir "Error: Longitud no valida.";
				SiNo
					Definir matriz1 Como Entero;
					Dimension matriz1[100, 100];
					Definir matriz2 Como Entero;
					Dimension matriz2[100, 100];
					Definir matriz3 Como Entero;
					Dimension matriz3[100, 100];
					// Solicitar al usuario ingresar los elementos de la primera matriz
					Escribir "Ingrese los elementos de la primera matriz:";
					Para i <- 1 Hasta filas1 Con Paso 1 Hacer
						Para j <- 1 Hasta columnas1 Con Paso 1 Hacer
							Escribir "Elemento [", i, "][", j, "]: ";
							Leer matriz1[i,j];
						FinPara
					FinPara
					
					// Solicitar al usuario ingresar los elementos de la segunda matriz
					Escribir "Ingrese los elementos de la segunda matriz:";
					Para i <- 1 Hasta filas2 Con Paso 1 Hacer
						Para j <- 1 Hasta columnas2 Con Paso 1 Hacer
							Escribir "Elemento [", i, "][", j, "]: ";
							Leer matriz2[i,j];
						FinPara
					FinPara
					
					// Calcular la multiplicación de matrices y almacenar el resultado en la matriz resultado
					Para i <- 1 Hasta filas1 Con Paso 1 Hacer
						Para j <- 1 Hasta columnas2 Con Paso 1 Hacer
							matriz3[i,j] <- 0;
							Para k <- 1 Hasta columnas1 Con Paso 1 Hacer
								matriz3[i,j] <- matriz3[i,j] + matriz1[i,k] * matriz2[k,j];
							FinPara
						FinPara
					FinPara
					
					// Mostrar la matriz resultado como salida
					Escribir "La matriz resultado de la multiplicacion es:";
					Para i <- 1 Hasta filas1 Con Paso 1 Hacer
						Para j <- 1 Hasta columnas2 Con Paso 1 Hacer
							Escribir matriz3[i,j], " ";
						FinPara
						Escribir "";
					FinPara
				FinSi
			FinSi
		FinSi
	FinSi
FinSi
FinProceso
