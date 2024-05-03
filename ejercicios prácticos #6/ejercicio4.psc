Proceso ejercicio4
	ingresarNotas();
FinProceso

Funcion ingresarNotas()
	Definir estudiantes Como Entero;
    Definir notas Como Real;
	Dimension notas[10];
    Definir sumaNotas, promedio Como Real;
	Definir i Como Entero;
    estudiantes <- 10;
    sumaNotas <- 0.0;
    
    Escribir "Ingrese las notas de los ", estudiantes, " estudiantes:";
	
    Para i <- 0 Hasta 9 Con Paso 1 Hacer
        Escribir "Estudiante ", i+1, ": ";
        Leer notas[i];
        sumaNotas <- sumaNotas + notas[i];
    FinPara
	
    promedio <- sumaNotas / estudiantes;
	
    Escribir "El promedio general de la seccion es: ", promedio;
FinFuncion
