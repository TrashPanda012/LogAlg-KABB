Proceso Ejercicio9
	Definir matriz1, matriz2, matrizResultado Como Real;
	Dimension matriz1[10,10], matriz2[10,10], matrizResultado[10,10];
    Definir filasMatriz1, columnasMatriz1, filasMatriz2, columnasMatriz2, i, j, k Como Entero;
	
    // Solicitar al usuario ingresar las dimensiones de la primera matriz
    Escribir "Ingrese el número de filas de la primera matriz:";
    Leer filasMatriz1;
    Escribir "Ingrese el número de columnas de la primera matriz:";
    Leer columnasMatriz1;
	
    // Solicitar al usuario ingresar las dimensiones de la segunda matriz
    Escribir "Ingrese el número de filas de la segunda matriz:";
    Leer filasMatriz2;
    Escribir "Ingrese el número de columnas de la segunda matriz:";
    Leer columnasMatriz2;
	
    // Verificar si las dimensiones son compatibles para la multiplicación
    Si columnasMatriz1 <> filasMatriz2 Entonces
        Escribir "No se pueden multiplicar las matrices. Las dimensiones no son compatibles.";
    Sino
        // Solicitar al usuario ingresar los elementos de la primera matriz
        Escribir "Ingrese los elementos de la primera matriz:";
        i <- 1;
        Mientras i <= filasMatriz1 Hacer
            j <- 1;
            Mientras j <= columnasMatriz1 Hacer
                Leer matriz1[i,j];
                j <- j + 1;
            FinMientras;
            i <- i + 1;
        FinMientras;
		
        // Solicitar al usuario ingresar los elementos de la segunda matriz
        Escribir "Ingrese los elementos de la segunda matriz:";
        i <- 1;
        Mientras i <= filasMatriz2 Hacer
            j <- 1;
            Mientras j <= columnasMatriz2 Hacer
                Leer matriz2[i,j];
                j <- j + 1;
            FinMientras;
            i <- i + 1;
        FinMientras;
		
        // Inicializar la matriz resultado con ceros
        i <- 1;
        Mientras i <= filasMatriz1 Hacer
            j <- 1;
            Mientras j <= columnasMatriz2 Hacer
                matrizResultado[i,j] <- 0;
                j <- j + 1;
            FinMientras;
            i <- i + 1;
        FinMientras;
		
        // Realizar la multiplicación de matrices
        i <- 1;
        Mientras i <= filasMatriz1 Hacer
            j <- 1;
            Mientras j <= columnasMatriz2 Hacer
                k <- 1;
                Mientras k <= columnasMatriz1 Hacer
                    matrizResultado[i,j] <- matrizResultado[i,j] + (matriz1[i,k] * matriz2[k,j]);
                    k <- k + 1;
                FinMientras;
                j <- j + 1;
            FinMientras;
            i <- i + 1;
        FinMientras;
		
        // Mostrar la matriz resultado
        Escribir "La matriz resultado de la multiplicación es:";
        i <- 1;
        Mientras i <= filasMatriz1 Hacer
            j <- 1;
            Mientras j <= columnasMatriz2 Hacer
                Escribir matrizResultado[i,j];
                j <- j + 1;
            FinMientras;
            i <- i + 1;
        FinMientras;
    FinSi;
	
FinProceso
