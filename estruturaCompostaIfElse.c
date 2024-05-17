#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20]; // Declara��o da vari�vel nome (vetor de char contendo 20 �ndices).
    int idade;     // Declara��o da vari�vel do tipo inteiro chamada idade.

    printf("\n============================================================\n");
    printf("*** Estruturas Condicionais Compostas Comando if-else. *** \n");

    printf("\n============================================================\n");
    printf("Verifica a condi��o l�gica no If. Caso seja verdadeira, executa o bloco de comandos do if. \nCaso a condi��o seja falsa, executa o bloco do else.\n");

    printf("\n============================================================\n");
    printf("*** Vamos a um exemplo: ***\n");

    printf("Digite seu nome:\n");
    scanf("%s", nome); // Para ler uma string n�o ? necess?rio o & antes da vari�vel

    while (getchar() != '\n'); // C�digo para limpar o buffer do teclado

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("%s, voc� tem %d anos. Voc� j� � maior de idade, portanto, voc� pode dirigir!\n", nome, idade);
    }
    else
    {
        printf("%s, voc� tem %d anos. Voc� � menor de idade, portanto, voc� n�o pode dirigir!\n", nome, idade);
    }

    return 0;

}
