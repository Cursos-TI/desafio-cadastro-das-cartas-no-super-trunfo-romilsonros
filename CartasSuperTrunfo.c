/*
CRIANDO JOGO SUPER TRUNFO NIVEL NOVATO
Usando variáveis com PRINTF e o SCANF. O usuário digita as
informações das cartas, o sistema armazenar e imprimir na tela.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Desafio - nível novato\n");
    printf("--------------------------- \n");

    char estado,estado_2;
    char codigo_da_carta[10],codigo_da_carta_2[10];
    char cidade[40],cidade_2[40];
    unsigned long int populacao,populacao_2;
    float area,area_2;
    float pib,pib_2;
    int pontos_turisticos,pontos_turisticos_2;
    float densidadepopulacional,densidadepopulacional_2;
    float pippercapita,pippercapita_2;

    //Cadastrando a Carta 1 usando o printf e o scanf.

    printf("CADASTRAR CARTA 1\n");

    printf("Digite o Estado: \n"); 
    scanf(" %c",&estado);
          
    printf("Digite o Código da Carta: \n");
    scanf(" %s",codigo_da_carta);

    printf("Digite a Cidade: \n");
    scanf(" %s", cidade);

    printf("Digite a População: \n");
    scanf(" %lu",&populacao);

    printf("Digite Área: \n");
    scanf(" %f",&area);

    printf("Digite o Pib: \n");
    scanf(" %f",&pib);

    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf(" %d",&pontos_turisticos);

    printf("\n\n");

    //Cadastrando a Carta 2 usando o printf e o scanf.

    printf("OBRIGADO POR CADASTRAR A CARTA 1 \n");
    printf("AGORA CADASTRE A CARTA 2\n");

    printf("Digite o Estado: \n");
    scanf(" %c",&estado_2);
          
    printf("Digite o Código da Carta: \n");
    scanf(" %s",codigo_da_carta_2);

    printf("Digite a Cidade: \n");
    scanf(" %s",cidade_2);

    printf("Digite a População: \n");
    scanf(" %lu",&populacao_2);

    printf("Digite Área: \n");
    scanf(" %f",&area_2);

    printf("Digite o Pib: \n");
    scanf(" %f",&pib_2);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf(" %d",&pontos_turisticos_2);


    //Calculando a Densidade Populacional
    densidadepopulacional=(populacao/area);
    densidadepopulacional_2=(populacao_2/area_2);
    pippercapita=(pib * 1000000000.0)/populacao);
    pippercapita_2=(pib_2 * 1000000000.0)/populacao_2);

    printf("\n\n");

    //Immprimindo a carta 1 e a carta 2 usando printf.
    printf("CARTA1: \n");

    printf("Estado: %c\n" , estado);
    printf("Código: %s\n" , codigo_da_carta);
    printf("Nome da Cidade: %s\n" , cidade);
    printf("População: %lu hab\n" , populacao);
    printf("Área: %.2f\n" , area);
    printf("PIB: %.2f\n" , pib);
    printf("Número de Pontos Turísticos: %d\n" , pontos_turisticos);
    printf("A densidade Populaciona: %.2f\n" , densidadepopulacional);
    printf("PIB per Capita: %.2f\n" , pippercapita);

    printf("CARTA2 \n");

    printf("Estado: %c\n" , estado_2);
    printf("Código: %s\n" , codigo_da_carta_2);
    printf("Nome da Cidade: %s\n" , cidade_2);
    printf("População: %lu hab\n" , populacao_2);
    printf("Área: %.2f\n" , area_2);
    printf("PIB: %.2f\n" , pib_2);
    printf("Número de Pontos Turísticos: %d\n" , pontos_turisticos_2);
    printf("A densidade Populaciona: %.2f\n" , densidadepopulacional_2);
    printf("PIB per Capita: %.2f\n" , pippercapita_2);


    
    return 0;

}