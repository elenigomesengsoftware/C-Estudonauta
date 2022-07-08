#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int x = rand () % 5 + 1;
    int z;

    printf("<<< EX005 - Será que você acerta? >>>\n\n");
    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar qual é!\n");
    printf("Qual é o seu palpite? ");
    scanf("%d", &z);
    printf("Eu pensei no número %d e você pensou no número %d!\n", x, z);




}
