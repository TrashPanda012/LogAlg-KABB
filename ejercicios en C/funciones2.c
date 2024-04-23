#include<stdio.h>
 
 /* Calcular la nota de un estudiante 
 que posee un acumulado de 60 puntos
 y un examen de 40 puntos.
 Decir si esta aprobado o reprobado.
 Un estudiante aprueba si su nota es
 mayor o igual a 70 */

 int calFinalSc(int score, int exam);
 void valFinalSc(int score);
 void pedirNotas();

 int main(int argc, char const *argv[]){
    pedirNotas();
    return 0;
 }
 
 void pedirNotas(){
    int acumulado, examen, notaFinal;
    printf("\n Dime el acumulado: ");
    scanf("%d", &acumulado);
    printf("\n Dime la nota del examen: ");
    scanf("%d", &examen);
    notaFinal = calFinalSc(acumulado, examen);
    printf("\n Nota final: %d", notaFinal);
    valFinalSc(notaFinal);
 }

 int calFinalSc(int score, int exam){
    return score + exam;
 }

 void valFinalSc(int score){
    if(score >= 70) printf("\n Aprobado :D");
    else printf("\n Reprobado :(");
 }