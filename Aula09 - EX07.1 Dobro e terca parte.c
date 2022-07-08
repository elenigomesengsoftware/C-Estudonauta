

#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    float n, terco;
    int dobro;

    printf("Digite um número: ");
    scanf("%f", &n);

    dobro = n * 2;
    terco = n / 3;

    printf("Analisando o número %.0f, seu dobro é %i e sua terça parte é %.2f.", n, dobro, terco);
    // printf("Analisando o número %.0f, seu dobro é %i e sua terça parte é %.2f.", n, (n * n), (n / 3));
}


