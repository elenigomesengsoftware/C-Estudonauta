#include <stdio.h>
#include <locale.h>
#include <iostream.h>
/*void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n<<< EX001 - Listagem >>> \n \nListagem de Alunos \nNome \t\tNota \n-------------------- \nAna Beatriz \t8.5 \nBianca Martins \t9.0 \nCláudio Sá \t5.5 \nGiovana Silva \t7.5 \n");
}*/

using namespace std;



int main( )

{

   float a=10.0;

   float b=4.0;

   cout < < media(a,b);

   return 0;

}

float media(float x, float y) { return (x+y)/2;}
