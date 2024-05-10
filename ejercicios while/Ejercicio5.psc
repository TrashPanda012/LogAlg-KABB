Proceso Ejercicio5
	Definir aprobados, reprobados, sumaNotas, nota, promedio, i Como Entero;
    aprobados <- 0;
    reprobados <- 0;
    sumaNotas <- 0;
    promedio <- 0;
    i <- 1;
    
    Mientras i <= 8 Hacer
        Escribir "Ingrese la nota del estudiante ", i, ":";
        Leer nota;
        
        Si nota >= 70 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        FinSi
        
        sumaNotas <- sumaNotas + nota;
        i <- i + 1;
    FinMientras
    
    promedio <- sumaNotas / 8;
    
    Escribir "Cantidad de alumnos aprobados:", aprobados;
    Escribir "Cantidad de alumnos reprobados:", reprobados;
    Escribir "Promedio general del grupo:", promedio;
	
FinProceso
