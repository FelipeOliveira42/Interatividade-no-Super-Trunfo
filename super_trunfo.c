#include <stdio.h>
#include <string.h>

int main() {
    // ====== Dados das Cartas ======
    char nome1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 22000.0;
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;

    char nome2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 6300.0;
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;

    int opcao;

    // ====== Exibe o Menu ======
    printf("=== SUPER TRUNFO: Comparacao de Cartas ===\n\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);

    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparacao ===\n");

    // ====== Switch principal ======
    switch (opcao) {
        case 1: // População
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s (maior populacao)\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s (maior populacao)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s (maior area)\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedor: %s (maior area)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhoes de reais\n", nome1, pib1);
            printf("%s: %.2f bilhoes de reais\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s (maior PIB)\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s (maior PIB)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d pontos\n", nome1, pontosTuristicos1);
            printf("%s: %d pontos\n", nome2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s (mais pontos turisticos)\n", nome1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s (mais pontos turisticos)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida)
            printf("Atributo escolhido: Densidade Demografica\n");
            printf("%s: %.4f hab/km²\n", nome1, densidade1);
            printf("%s: %.4f hab/km²\n", nome2, densidade2);

            if (densidade1 < densidade2) { // regra invertida
                printf("Vencedor: %s (menor densidade)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}
