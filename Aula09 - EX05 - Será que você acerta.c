#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int x = rand () % 5 + 1;
    int z;

    printf("<<< EX005 - Ser� que voc� acerta? >>>\n\n");
    printf("Vou pensar em um n�mero entre 1 e 5. Tente adivinhar qual �!\n");
    printf("Qual � o seu palpite? ");
    scanf("%d", &z);
    printf("Eu pensei no n�mero %d e voc� pensou no n�mero %d!\n", x, z);




}
