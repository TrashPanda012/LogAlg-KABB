Proceso Ejercicio1
	Definir n, suma, contador como Entero;
	
	Escribir "Ingrese un n�mero natural:";
	Leer n;
	
	suma <- 0;
	contador <- 1;
	
	Si n > 0 Entonces
		Mientras contador <= n Hacer
			suma <- suma + contador;
			contador <- contador + 1;
		FinMientras
		Escribir "La suma de los n�meros naturales desde 1 hasta ", n, " es: ", suma;
	SiNo
		Escribir "El n�mero ingresado no es v�lido. Debe ser un n�mero natural mayor que 0.";
	FinSi
	
FinProceso
