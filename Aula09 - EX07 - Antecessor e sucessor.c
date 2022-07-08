#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    char x;

    printf("<<< Antecessor e Sucessor >>> \n");
    printf("Digite uma letra: ");
    scanf("%c", &x);
    char y = x - 1;
    char z = x + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.\n", x,y,z);
}

