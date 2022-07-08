
#include <stdio.h>
#include <locale.h>
#include <string.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%i", &num);
    float resto = num % 2;
   // printf("o resto é: %.0f", resto);
   // utilizado pelo professor: (num%2==0) para dar certo.
    printf("O número %i é %s",num, (resto==0)?"PAR":"IMPAR");
}

