/*Este programa le a nota de 3 trabalhos e de 3 provas de um aluno
calcula sua media final e imprime aprovado, reprovado ou ficou de recuperação
*/

#include<stdio.h>

int main (void){
    int t1, t2, t3;  // notas dos trabalhos
    int  p1, p2, p3; // notas das provas

    float mediaTrabs; // media trabalhos
    float mediaProvas; // media provas
    float mediaFinal; 
    printf("Digite as notas dos trabalhos: ");
    scanf("%d %d %d", &t1, &t2, &t3);

    printf("Digite as notas das provas: ");
    scanf(" %d %d %d", &p1, &p2, &p3);

    mediaTrabs = (t1+t2+t3)/3.0;
    mediaProvas = (p1+2*p2+3*p3)/6.0;

    mediaFinal = (mediaTrabs+mediaProvas)/2.0;


    if(mediaFinal>=6){
        printf("Aprovado, media %.2f", mediaFinal);
    } else if(mediaFinal < 4){
        printf("Reprovado, media: %.2f", mediaFinal);
    } else {
        printf("Recuperacao, media: %.2f", mediaFinal);
    }
    return 0;
}