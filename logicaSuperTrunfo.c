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
        area_1 = 100;
        pib_1 = 100;
        numero_pontos_turisticos_1 = 100;
        populacao_1 = 1000;
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
        area_2= 50;
        pib_2 = 200;
        numero_pontos_turisticos_2 = 10;
        populacao_2 = 2000;
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

    int opcao_1, opcao_2, vencedor;
    float soma_1 = 0.0, soma_2 = 0.0;

    printf("Lista de atributos comparáveis: \n");
    printf("1 - População \n");
    printf("2 - Área  \n");
    printf("3 - PIB  \n");
    printf("4 - Número de pontos turísticos \n");
    printf("5 - Densidade demográfica \n");
    printf("Selecione o primeiro atributo que deseja comparar: \n");
    scanf("%d", &opcao_1);

    printf("Selecione o segundo atributo que deseja comparar (diferente de %d):\n", opcao_1);

    // Aqui utilizei o for para agilizar mesmo...
    for (int i = 1; i <= 5; i++) {
            if (i != opcao_1) {
                switch (i) {
                    case 1: printf("1 - População\n"); break;
                    case 2: printf("2 - Área\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - Número de pontos turísticos\n"); break;
                    case 5: printf("5 - Densidade demográfica\n"); break;
                }
            }
        }

    scanf("%d", &opcao_2);

    if(opcao_1 == opcao_2) {
        printf("Selecione o segundo atributo que seja diferente de %d \n", opcao_1);
        return 0;
    }

    switch (opcao_1)
    {
    case 1:
        printf("\nComparação de cartas (Atributo: População): \n");
        printf("Carta 1 - %s (%c): %lu \n", nome_cidade_1, estado_1, populacao_1);
        printf("Carta 2 - %s (%c): %lu \n", nome_cidade_2, estado_2, populacao_2);

        if(populacao_1 > populacao_2) {
            soma_1 += (float) populacao_1;
        } else if(populacao_1 < populacao_2) {
            soma_2 += (float) populacao_2;
        }
    break;

    case 2:
        printf("\nComparação de cartas (Atributo: Área): \n");
        printf("Carta 1 - %s (%c): %f \n", nome_cidade_1, estado_1, area_1);
        printf("Carta 2 - %s (%c): %f \n", nome_cidade_2, estado_2, area_2);

        if(area_1 > area_2) {
            soma_1 += (float) area_1;
        } else if(area_1 < area_2) {
            soma_2 += (float) area_2;
        }
    break;

    case 3:
        printf("\nComparação de cartas (Atributo: PIB): \n");
        printf("Carta 1 - %s (%c): %.2f \n", nome_cidade_1, estado_1, pib_1_in_billions);
        printf("Carta 2 - %s (%c): %.2f \n", nome_cidade_2, estado_2, pib_2_in_billions);

        if(pib_1_in_billions > pib_2_in_billions) {
            soma_1 += (float) pib_1_in_billions;
        } else if(pib_1_in_billions < pib_2_in_billions) {
            soma_2 += (float) pib_2_in_billions;
        }

    break;

    case 4:
        printf("\nComparação de cartas (Atributo: Número de pontos turísticos): \n");
        printf("Carta 1 - %s (%c): %d \n", nome_cidade_1, estado_1, numero_pontos_turisticos_1);
        printf("Carta 2 - %s (%c): %d \n", nome_cidade_2, estado_2, numero_pontos_turisticos_2);

        if(numero_pontos_turisticos_1 > numero_pontos_turisticos_2) {
            soma_1 += (float) numero_pontos_turisticos_1;
        } else if(numero_pontos_turisticos_1 < numero_pontos_turisticos_2) {
            soma_2 += (float) numero_pontos_turisticos_2;
        }

    break;

    case 5:
        printf("\nComparação de cartas (Atributo: Densidade demográfica): \n");
        printf("Carta 1 - %s (%c): %.2f \n", nome_cidade_1, estado_1, densidade_populacional_1);
        printf("Carta 2 - %s (%c): %.2f \n", nome_cidade_2, estado_2, densidade_populacional_2);

        if(densidade_populacional_1 < densidade_populacional_2) {
            soma_1 += (float) densidade_populacional_1;
        } else if(densidade_populacional_1 > densidade_populacional_2){
            soma_2 += (float) densidade_populacional_2;
        }

    break;
    
    default:
        printf("Opção inválida");
        break;
    }


    switch (opcao_2)
    {
    case 1:
        printf("\nComparação de cartas (Atributo: População): \n");
        printf("Carta 1 - %s (%c): %lu \n", nome_cidade_1, estado_1, populacao_1);
        printf("Carta 2 - %s (%c): %lu \n", nome_cidade_2, estado_2, populacao_2);

        if(populacao_1 > populacao_2) {
            soma_1 += (float) populacao_1;
        } else if(populacao_1 < populacao_2) {
            soma_2 += (float) populacao_2;
        }
    break;

    case 2:
        printf("\nComparação de cartas (Atributo: Área): \n");
        printf("Carta 1 - %s (%c): %f \n", nome_cidade_1, estado_1, area_1);
        printf("Carta 2 - %s (%c): %f \n", nome_cidade_2, estado_2, area_2);

        if(area_1 > area_2) {
            soma_1 += (float) area_1;
        } else if(area_1 < area_2) {
            soma_2 += (float) area_2;
        }
    break;

    case 3:
        printf("\nComparação de cartas (Atributo: PIB): \n");
        printf("Carta 1 - %s (%c): %.2f \n", nome_cidade_1, estado_1, pib_1_in_billions);
        printf("Carta 2 - %s (%c): %.2f \n", nome_cidade_2, estado_2, pib_2_in_billions);

        if(pib_1_in_billions > pib_2_in_billions) {
            soma_1 += (float) pib_1_in_billions;
        } else if(pib_1_in_billions < pib_2_in_billions) {
            soma_2 += (float) pib_2_in_billions;
        }

    break;

    case 4:
        printf("\nComparação de cartas (Atributo: Número de pontos turísticos): \n");
        printf("Carta 1 - %s (%c): %d \n", nome_cidade_1, estado_1, numero_pontos_turisticos_1);
        printf("Carta 2 - %s (%c): %d \n", nome_cidade_2, estado_2, numero_pontos_turisticos_2);

        if(numero_pontos_turisticos_1 > numero_pontos_turisticos_2) {
            soma_1 += (float) numero_pontos_turisticos_1;
        } else if(numero_pontos_turisticos_1 < numero_pontos_turisticos_2){
            soma_2 += (float) numero_pontos_turisticos_2;
        }

    break;

    case 5:
        printf("\nComparação de cartas (Atributo: Densidade demográfica): \n");
        printf("Carta 1 - %s (%c): %.2f \n", nome_cidade_1, estado_1, densidade_populacional_1);
        printf("Carta 2 - %s (%c): %.2f \n", nome_cidade_2, estado_2, densidade_populacional_2);

        if(densidade_populacional_1 < densidade_populacional_2) {
            soma_1 += (float) densidade_populacional_1;
        } else if(densidade_populacional_1 > densidade_populacional_2){
            soma_2 += (float) densidade_populacional_2;
        }

    break;
    
    default:
        printf("Opção inválida");
        break;
    }


     printf("\nSoma Carta 1: %.2f \n", (float) soma_1);

     printf("Soma Carta 2: %.2f \n", (float) soma_2);
   
    if(soma_1 == soma_2) {
        printf("\nEmpate!");
    } else {
        printf("\nResultado: Carta %d (%s) venceu! \n", (soma_1 > soma_2) +1, (soma_1 > soma_2) == 1 ? nome_cidade_1 : nome_cidade_2 );
    }

    
    return 0;
}
