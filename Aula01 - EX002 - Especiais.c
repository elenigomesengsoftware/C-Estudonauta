#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX002 - Especiais \n \n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n\\a \t= \t=Beep\n\\n \t= \t=Nova Linha \n\\t \t= \t=Tabulação \n\\\\ \t= \t=Barra \n%%%% \t= \t=Porcentagem\n\\? \t= \t=Interrogação \n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
}
