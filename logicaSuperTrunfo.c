#include <stdio.h>
#include <string.h>

int main() {
    int DEBUG = 0;

    // CARTA 1
    char estado_1, codigo_carta_1[20], nome_cidade_1[20];
    float area_1, pib_1, densidade_populacional_1, pib_per_capita_1, super_poder_1;
    int numero_pontos_turisticos_1;
    unsigned long int populacao_1;

    // Facilitar o teste
    if(DEBUG) {
        estado_1 = 'A';
        strcpy(codigo_carta_1, "A01");
        strcpy(nome_cidade_1, "Fortaleza");
        area_1 = 101.25;
        pib_1 = 10.25;
        numero_pontos_turisticos_1 = 100;
        populacao_1 = 100000;
    }
    else {
        printf("Digite o Estado 1: \n");
        scanf(" %c", &estado_1);
        printf("Digite o Código da Carta 1: \n");
        scanf("%s", codigo_carta_1);
        printf("Digite o Nome da Cidade 1:\n");
        scanf("%s", nome_cidade_1);
        printf("Digite a População 1: \n");
        scanf("%li", &populacao_1);
        printf("Digite a Área (em km²) 1: \n");
        scanf("%f", &area_1);
        printf("Digite o PIB 1: \n");
        scanf("%f", &pib_1);
        printf("Digite o Número de Pontos Turísticos 1: \n");
        scanf("%d", &numero_pontos_turisticos_1);
    }
 
    float pib_1_in_billions = pib_1 * 1000000000;
    densidade_populacional_1 = (float)populacao_1 / area_1;
    pib_per_capita_1 = pib_1_in_billions / populacao_1;
    super_poder_1 = (float)populacao_1 + area_1 + pib_1_in_billions + numero_pontos_turisticos_1;

    // CARTA 2
    char estado_2, codigo_carta_2[20], nome_cidade_2[20];
    float area_2, pib_2, densidade_populacional_2, pib_per_capita_2, super_poder_2;
    int numero_pontos_turisticos_2;
    unsigned long int populacao_2;

    // Facilitar o teste
    if(DEBUG) {
        estado_2 = 'B';
        strcpy(codigo_carta_2, "B02");
        strcpy(nome_cidade_2, "Recife");
        area_2= 101.25;
        pib_2 = 10.25;
        numero_pontos_turisticos_2 = 100;
        populacao_2 = 100000;
    } else {
        printf("Digite o Estado 2: \n");
        scanf(" %c", &estado_2);
        printf("Digite o Código da Carta 2: \n");
        scanf("%s", codigo_carta_2);
        printf("Digite o Nome da Cidade 2:\n");
        scanf("%s", nome_cidade_2);
        printf("Digite a População 2: \n");
        scanf("%li", &populacao_2);
        printf("Digite a Área (em km²) 2: \n");
        scanf("%f", &area_2);
        printf("Digite o PIB 2: \n");
        scanf("%f", &pib_2);
        printf("Digite o Número de Pontos Turístico 2: \n");
        scanf("%d", &numero_pontos_turisticos_2);
    }

    float pib_2_in_billions = pib_2 * 1000000000;
    densidade_populacional_2 = (float)populacao_2 / area_2;
    pib_per_capita_2 = pib_2_in_billions / populacao_2;
    super_poder_2 = (float)populacao_2 + area_2 + pib_2_in_billions + numero_pontos_turisticos_2;

    printf("\nCarta 1 \n");
    printf("Estado: %c \n", estado_1);
    printf("Código da Carta: %s \n", codigo_carta_1);
    printf("Nome da Cidade: %s \n", nome_cidade_1);
    printf("População: %li \n", populacao_1);
    printf("Área: %.2f KM² \n", area_1);
    printf("PIB: %.2f bilhões de reais \n", pib_1);
    printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);
    printf("Super Porder: %.2f \n", super_poder_1);

    printf("\nCarta 2 \n");
    printf("Estado: %c \n", estado_2);
    printf("Código da Carta: %s \n", codigo_carta_2);
    printf("Nome da Cidade: %s \n", nome_cidade_2);
    printf("População: %li \n", populacao_2);
    printf("Área: %.2f KM² \n", area_2);
    printf("PIB: %.2f bilhões de reais \n", pib_2);
    printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
    printf("Super Porder: %.2f \n", super_poder_2);

    int opcao, vencedor;
    int carta_vencedora = 0;

    printf("Lista de atributos comparáveis: \n");
    printf("1 - População \n");
    printf("2 - Área  \n");
    printf("3 - PIB  \n");
    printf("4 - Número de pontos turísticos \n");
    printf("5 - Densidade demográfica \n");
    printf("Selecione qual atributo deseja comparar: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nComparação de cartas (Atributo: População): \n");
        printf("Carta 1 - %s (%c): %lu \n", nome_cidade_1, estado_1, populacao_1);
        printf("Carta 2 - %s (%c): %lu \n", nome_cidade_2, estado_2, populacao_2);

        if(populacao_1 > populacao_2) {
            carta_vencedora = 1;
        } else if(populacao_1 == populacao_2) {
            carta_vencedora = 0;
         }else {
            carta_vencedora = 2;
        }
    break;

    case 2:
        printf("\nComparação de cartas (Atributo: Área): \n");
        printf("Carta 1 - %s (%c): %f \n", nome_cidade_1, estado_1, area_1);
        printf("Carta 2 - %s (%c): %f \n", nome_cidade_2, estado_2, area_2);

        if(area_1 > area_2) {
            carta_vencedora = 1;
        } else if(area_1 == area_2) {
            carta_vencedora = 0;
         }else {
            carta_vencedora = 2;
        }
    break;

    case 3:
        printf("\nComparação de cartas (Atributo: PIB): \n");
        printf("Carta 1 - %s (%c): %.2f \n", nome_cidade_1, estado_1, pib_1);
        printf("Carta 2 - %s (%c): %.2f \n", nome_cidade_2, estado_2, pib_2);

        if(pib_1_in_billions > pib_2_in_billions) {
            carta_vencedora = 1;
        } else if(area_1 == area_2) {
            carta_vencedora = 0;
         }else {
            carta_vencedora = 2;
        }

    break;

    case 4:
        printf("\nComparação de cartas (Atributo: Número de pontos turísticos): \n");
        printf("Carta 1 - %s (%c): %d \n", nome_cidade_1, estado_1, numero_pontos_turisticos_1);
        printf("Carta 2 - %s (%c): %d \n", nome_cidade_2, estado_2, numero_pontos_turisticos_2);

        if(numero_pontos_turisticos_1 > numero_pontos_turisticos_2) {
            carta_vencedora = 1;
        } else if(area_1 == area_2) {
            carta_vencedora = 0;
         }else {
            carta_vencedora = 2;
        }

    break;

    case 5:
        printf("\nComparação de cartas (Atributo: Densidade demográfica): \n");
        printf("Carta 1 - %s (%c): %.2f \n", nome_cidade_1, estado_1, densidade_populacional_1);
        printf("Carta 2 - %s (%c): %.2f \n", nome_cidade_2, estado_2, densidade_populacional_2);

        if(densidade_populacional_1 < densidade_populacional_2) {
            carta_vencedora = 1;
        } else if(area_1 == area_2) {
            carta_vencedora = 0;
         }else {
            carta_vencedora = 2;
        }

    break;
    
    default:
        printf("Opção inválida");
        break;
    }


    if(carta_vencedora != 0) {
        printf("Resultado: Carta %d (%s) venceu! \n", carta_vencedora, carta_vencedora == 1 ? nome_cidade_1 : nome_cidade_2 );
    } else {
        printf("Empate!");
    }
    
    return 0;
}
