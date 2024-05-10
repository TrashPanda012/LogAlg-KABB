Proceso Ejercicio4
	Definir sumaNotas, contador, nota, promedio como Real;
    
    sumaNotas <- 0;
    contador <- 1;
    
    Mientras contador <= 10 Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ":";
        Leer nota;
        
        sumaNotas <- sumaNotas + nota;
        contador <- contador + 1;
    FinMientras
    
    promedio <- sumaNotas / 10;
    Escribir "El promedio general de la sección es:", promedio;
FinProceso
