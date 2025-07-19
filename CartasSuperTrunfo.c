/*
CRIANDO JOGO SUPER TRUNFO NIVEL NOVATO

IDEIA: Usar variáveis para armazena e visualizar as informações com as funções PRINTF e o SCANF.
OBJETIVO: O usuário digita as informações das cartas, o sistema armazenar e imprimir na tela.

*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Desafio - nível novato\n");
    printf("--------------------------- \n");

    char estado,estado2;
    char codigo_da_carta[10],codigo_da_carta2[10];
    char cidade[40],cidade2[40];
    int populacao,populacao2;
    float area,area2;
    float pib,pib2;
    int pontos_turisticos,pontos_turisticos2;

    //Cadastrando a Carta 1 usando o printf e o scanf.

    printf("CADASTRAR CARTA 1\n");

    printf("Digite o Estado: \n"); 
    scanf(" %c", &estado);
          
    printf("Digite o Código da Carta: \n");
    scanf(" %s", &codigo_da_carta);

    printf("Digite a Cidade: \n");
    scanf(" %s", &cidade);

    printf("Digite a População: \n");
    scanf(" %d", &populacao);

    printf("Digite Área: \n");
    scanf(" %f", &area);

    printf("Digite o Pib: \n");
    scanf(" %f", &pib);

    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos);

    printf("\n\n");

    //Cadastrando a Carta 2 usando o printf e o scanf.

    printf("OBRIGADO POR CADASTRAR A CARTA 1 \n");
    printf("AGORA CADASTRE A CARTA 2\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &estado2);
          
    printf("Digite o Código da Carta: \n");
    scanf(" %s", &codigo_da_carta2);

    printf("Digite a Cidade: \n");
    scanf(" %s", &cidade2);

    printf("Digite a População: \n");
    scanf(" %d", &populacao2);

    printf("Digite Área: \n");
    scanf(" %f", &area2);

    printf("Digite o Pib: \n");
    scanf(" %f", &pib2);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf(" %d", &pontos_turisticos2);

    //Immprimindo a carta 1 e a carta 2 usando printf.
    printf("CARTA1: \n");

    printf("Estado: %c\n" , estado);
    printf("Código: %s\n" , codigo_da_carta);
    printf("Nome da Cidade: %s\n" , cidade);
    printf("População: %d\n" , populacao);
    printf("Área: %f\n" , area);
    printf("PIB: %f\n" , pib);
    printf("Número de Pontos Turísticos: %d\n" , pontos_turisticos);

    printf("CARTA2 \n");

    printf("Estado: %c\n" , estado2);
    printf("Código: %s\n" , codigo_da_carta2);
    printf("Nome da Cidade: %s\n" , cidade2);
    printf("População: %d\n" , populacao2);
    printf("Área: %f\n" , area2);
    printf("PIB: %f\n" , pib2);
    printf("Número de Pontos Turísticos: %d\n" , pontos_turisticos2);
    
    return 0;

}