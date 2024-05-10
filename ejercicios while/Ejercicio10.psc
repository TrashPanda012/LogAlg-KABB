Proceso Ejercicio10
	Definir matriz, matrizTranspuesta Como Real;
	Dimension matriz[100,100];
	Dimension matrizTranspuesta[100,100];
    Definir filas, columnas, i, j Como Entero;
	
    // Solicitar al usuario ingresar las dimensiones de la matriz
    Escribir "Ingrese el número de filas de la matriz:";
    Leer filas;
    Escribir "Ingrese el número de columnas de la matriz:";
    Leer columnas;
	
    // Solicitar al usuario ingresar los elementos de la matriz
    Escribir "Ingrese los elementos de la matriz:";
    i <- 1;
    Mientras i <= filas Hacer
        j <- 1;
        Mientras j <= columnas Hacer
            Leer matriz[i,j];
            j <- j + 1;
        FinMientras;
        i <- i + 1;
    FinMientras;
	
    // Calcular la transposición de la matriz
    i <- 1;
    Mientras i <= columnas Hacer
        j <- 1;
        Mientras j <= filas Hacer
            matrizTranspuesta[i,j] <- matriz[j,i];
            j <- j + 1;
        FinMientras;
        i <- i + 1;
    FinMientras;
	
    // Mostrar la matriz transpuesta
    Escribir "Matriz transpuesta:";
    i <- 1;
    Mientras i <= columnas Hacer
        j <- 1;
        Mientras j <= filas Hacer
            Escribir matrizTranspuesta[i,j];
            j <- j + 1;
        FinMientras;
        i <- i + 1;
    FinMientras;
FinProceso