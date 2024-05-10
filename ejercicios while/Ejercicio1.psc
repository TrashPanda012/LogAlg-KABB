Proceso Ejercicio1
	Definir n, suma, contador como Entero;
	
	Escribir "Ingrese un número natural:";
	Leer n;
	
	suma <- 0;
	contador <- 1;
	
	Si n > 0 Entonces
		Mientras contador <= n Hacer
			suma <- suma + contador;
			contador <- contador + 1;
		FinMientras
		Escribir "La suma de los números naturales desde 1 hasta ", n, " es: ", suma;
	SiNo
		Escribir "El número ingresado no es válido. Debe ser un número natural mayor que 0.";
	FinSi
	
FinProceso
