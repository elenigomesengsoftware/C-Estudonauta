#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    char produto[20];
    float preco, desconto, precofinal;


    printf("<<<  EX009 PREÇO DO PRODUTO >>>\n\n");
    printf("Produto: ");
    gets (produto);
    printf("Preço do produto %s: R$", produto);
    scanf("%f", &preco);
    printf("Desconto: (%%)");
    scanf("%f", &desconto);

    precofinal = preco - (preco * desconto / 100);

   // printf("%f", precofinal);

    printf("O produto %s custava R$%.2f, mas com %.0f%% de desconto, passa a custar R$%.2f.\n\n", produto, preco, desconto, precofinal);




}

