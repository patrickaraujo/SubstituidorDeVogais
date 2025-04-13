#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // Para usar a função tolower()

/*
 * Programa que lê uma string, conta suas vogais e substitui todas as vogais
 * por um caractere fornecido pelo usuário.
 *
 * Objetivo:
 * - Ler uma string do teclado
 * - Contar quantas vogais (a, e, i, o, u) ela possui
 * - Substituir todas as vogais por um caractere fornecido
 * - Exibir a string original, a string modificada e a quantidade de vogais
 */

int main() {
    // Declaração das strings com tamanho 50 caracteres
    char strOriginal[50];   // Armazenará a string original digitada pelo usuário
    char strAlterada[50];   // Armazenará a string com as vogais substituídas

    // Solicita e lê a string do usuário
    printf("Digite a palavra:\t");
    fgets(strOriginal, sizeof(strOriginal), stdin);

    //  Remove o caractere de nova linha ('\n') do final da string, se existir
    //  strcspn retorna o índice do primeiro '\n' encontrado
    //  strOriginal[strcspn(strOriginal, "\n")] = '\0';
    strOriginal[strcspn(strOriginal, "\n")] = strOriginal[strcspn(strOriginal, "\n")+1];

    // Exibe a string lida para confirmação
    printf("\nString lida:\t%s\n", strOriginal);

    // Solicita o caractere de substituição
    printf("\nEntre com um caractere (vogal ou consoante) para substituir as letras vogais da string lida: \t");
    char charSubst = getchar();

    // Variáveis para controle
    int i;              // Índice para percorrer a string
    int contadorVogais = 0; // Contador de vogais encontradas

    // Percorre a string original caractere por caractere
    for(i = 0; strOriginal[i] != '\0'; i++) {
        // Copia o caractere atual para a string alterada
        strAlterada[i] = strOriginal[i];

        // Converte o caractere para minúsculo para facilitar a comparação
        char temp = tolower(strAlterada[i]);

        // Verifica se o caractere é uma vogal
        if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
            // Substitui a vogal pelo caractere de substituição
            strAlterada[i] = charSubst;
            // Incrementa o contador de vogais
            contadorVogais++;
        }
    }

    // Adiciona o terminador nulo no final da string alterada
    strAlterada[i] = '\0';

    // Exibe os resultados
    printf("\nString original:\t%s\n", strOriginal);
    printf("\nQuantidade de vogais:\t%d\n", contadorVogais);
    printf("\nString alterada:\t%s\n", strAlterada);

    return 0;
}
