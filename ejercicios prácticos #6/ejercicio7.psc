Proceso ejercicio7
	Definir long, i Como Entero;
    Definir longitud_maxima Como Entero;
    Definir vector1 Como Entero;
	Dimension vector1[100];
    Definir vector2 Como Entero;
	Dimension vector2[100];
    Definir vector3 Como Entero;
	Dimension vector3[100];
	
    longitud_maxima <- 100;
    long <- 0;
	
    Escribir "Ingrese la longitud de los vectores:";
    Leer long;
	
    Si long <= 0 O long > longitud_maxima Entonces
        Escribir "Error: Longitud no valida.";
	FinSi

Escribir "Ingrese los elementos del primer vector:";
Para i <- 1 Hasta long Con Paso 1 Hacer
	Escribir "Elemento ", i, ": ";
	Leer vector1[i];
FinPara

Escribir "Ingrese los elementos del segundo vector:";
Para i <- 1 Hasta long Con Paso 1 Hacer
	Escribir "Elemento ", i, ": ";
	Leer vector2[i];
FinPara

Para i <- 1 Hasta long Con Paso 1 Hacer
	vector3[i] <- vector1[i] + vector2[i];
FinPara

Escribir "El vector resultado (suma) es:";
Para i <- 1 Hasta long Con Paso 1 Hacer
	Escribir vector3[i], " ";
FinPara
FinProceso
