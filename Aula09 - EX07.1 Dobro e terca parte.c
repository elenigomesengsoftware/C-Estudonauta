

#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    float n, terco;
    int dobro;

    printf("Digite um n�mero: ");
    scanf("%f", &n);

    dobro = n * 2;
    terco = n / 3;

    printf("Analisando o n�mero %.0f, seu dobro � %i e sua ter�a parte � %.2f.", n, dobro, terco);
    // printf("Analisando o n�mero %.0f, seu dobro � %i e sua ter�a parte � %.2f.", n, (n * n), (n / 3));
}


