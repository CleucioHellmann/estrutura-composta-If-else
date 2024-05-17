#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20]; // Declaração da variável nome (vetor de char contendo 20 índices).
    int idade;     // Declaração da variável do tipo inteiro chamada idade.

    printf("\n============================================================\n");
    printf("*** Estruturas Condicionais Compostas Comando if-else. *** \n");

    printf("\n============================================================\n");
    printf("Verifica a condição lógica no If. Caso seja verdadeira, executa o bloco de comandos do if. \nCaso a condição seja falsa, executa o bloco do else.\n");

    printf("\n============================================================\n");
    printf("*** Vamos a um exemplo: ***\n");

    printf("Digite seu nome:\n");
    scanf("%s", nome); // Para ler uma string não ? necess?rio o & antes da variável

    while (getchar() != '\n'); // Código para limpar o buffer do teclado

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("%s, você tem %d anos. Você já é maior de idade, portanto, você pode dirigir!\n", nome, idade);
    }
    else
    {
        printf("%s, você tem %d anos. Você é menor de idade, portanto, você não pode dirigir!\n", nome, idade);
    }

    return 0;

}
