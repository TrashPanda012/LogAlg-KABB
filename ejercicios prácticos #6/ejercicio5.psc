Proceso ejercicio5
	Definir estudiantes Como Entero;
    Definir notas Como Real;
	Dimension notas[8];
    Definir sumaNotas, promedio Como Real;
	Definir i, aprobados, reprobados Como Entero;
	estudiantes <- 8;
	sumaNotas <- 0;
	aprobados <- 0;
	reprobados <-0;
	
	Para i<-0 Hasta 7 Con Paso 1 Hacer
		Escribir "Ingrese la nota del estudiante ", i+1, ": ";
		Leer notas[i];
		sumaNotas <- sumaNotas + notas[i];
		Si notas[i] >= 70 Entonces
			aprobados <- aprobados + 1;
		SiNo
			reprobados <- reprobados + 1;
		FinSi
	FinPara
	
	promedio <- sumaNotas / estudiantes;
	Escribir "Cantidad de alumnos aprobados: ", aprobados;
	Escribir "Cantidad de alumnos reprobados: ", reprobados;
	Escribir "Promedio general del grupo: ", promedio;
	
FinProceso
