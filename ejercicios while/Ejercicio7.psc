Proceso Ejercicio7
	Definir arr1, arr2, arrSuma Como Entero;
	Dimension arr1[100], arr2[100], arrSuma[100];
    Definir long, i Como Entero;
    long <- 0;
    i <- 1;
	
    // Solicitar al usuario ingresar la longitud de los arrays
    Escribir "Ingrese la longitud de los arrays:";
    Leer long;
	
    // Solicitar al usuario ingresar los elementos del primer array
    Escribir "Ingrese los elementos del primer array:";
    Mientras i <= long Hacer
        Leer arr1[i];
        i <- i + 1;
    FinMientras;
	
    // Reiniciar contador para el segundo array
    i <- 1;
	
    // Solicitar al usuario ingresar los elementos del segundo array
    Escribir "Ingrese los elementos del segundo array:";
    Mientras i <= long Hacer
        Leer arr2[i];
        i <- i + 1;
    FinMientras;
	
    // Calcular la suma de los arrays y almacenarla en el tercer array
    i <- 1;
    Mientras i <= long Hacer
        arrSuma[i] <- arr1[i] + arr2[i];
        i <- i + 1;
    FinMientras;
	
    // Mostrar el resultado en el tercer array
    Escribir "La suma de los arrays es:";
    i <- 1;
    Mientras i <= long Hacer
        Escribir arrSuma[i];
        i <- i + 1;
    FinMientras;
	
FinProceso
