Proceso Ejercicio8
	Definir vector1, vector2, vector3 Como Real;
	Dimension vector1[100], vector2[100], vector3[100];
    Definir long, i Como Entero;
    long <- 0;
	
    // Solicitar al usuario ingresar la longitud de los vectores
    Escribir "Ingrese la longitud de los vectores:";
    Leer long;
	
    // Solicitar al usuario ingresar los elementos del primer vector
    Escribir "Ingrese los elementos del primer vector:";
    i <- 1;
    Mientras i <= long Hacer
        Leer vector1[i];
        i <- i + 1;
    FinMientras;
	
    // Solicitar al usuario ingresar los elementos del segundo vector
    Escribir "Ingrese los elementos del segundo vector:";
    i <- 1;
    Mientras i <= long Hacer
        Leer vector2[i];
        i <- i + 1;
    FinMientras;
	
    // Calcular el producto punto de los vectores
    i <- 1;
    Mientras i <= long Hacer
        vector3[i] <- vector1[i] * vector2[i];
        i <- i + 1;
    FinMientras;
	
    // Mostrar el resultado del producto 
	i <- 1;
	Escribir "El producto de los vectores es igual a: ";
    Mientras i <= long Hacer
		Escribir vector3[i];
		i <- i + 1;
	FinMientras
FinProceso
