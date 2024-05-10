Proceso Ejercicio6
	Definir numero, suma Como Entero;
    numero <- 100;
    suma <- 0;
    
    Mientras numero <= 200 Hacer
        Si numero MOD 2 = 0 Entonces
            suma <- suma + numero;
        FinSi;
        numero <- numero + 1;
    FinMientras
    
    Escribir "La suma de los números pares entre 100 y 200 es:", suma;
	
FinProceso
