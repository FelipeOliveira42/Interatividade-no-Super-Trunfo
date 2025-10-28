#include <stdio.h>
#include <string.h>

int main() {
    // ======== Cartas pré-cadastradas ========
    char nomePais1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 2300.0; // em bilhões
    int pontosTuristicos1 = 55;

    char nomePais2[50] = "Japão";
    int populacao2 = 125800000;
    float area2 = 377975.0;
    float pib2 = 5050.0; // em bilhões
    int pontosTuristicos2 = 65;

    // ======== Cálculos derivados ========
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // ======== Variáveis de controle ========
    int opcao1, opcao2;
    float valor1Carta1 = 0, valor1Carta2 = 0;
    float valor2Carta1 = 0, valor2Carta2 = 0;
    float somaCarta1 = 0, somaCarta2 = 0;

    // ======== MENU 1 - Escolha do primeiro atributo ========
    printf("===== SUPER TRUNFO - COMPARACAO AVANCADA =====\n");
    printf("Carta 1: %s\n", nomePais1);
    printf("Carta 2: %s\n\n", nomePais2);

    printf("Escolha o PRIMEIRO atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao1);

    // ======== MENU 2 - Escolha do segundo atributo (dinâmico) ========
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) { // não exibe o atributo já escolhido
            switch (i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Numero de Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
            }
        }
    }

    printf("Digite sua opcao: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0; // encerra o programa
    }

    printf("\n===== RESULTADOS DAS COMPARACOES =====\n");

    // ======== PRIMEIRO ATRIBUTO ========
    switch (opcao1) {
        case 1: // População
            printf("1º Atributo: Populacao\n");
            printf("%s: %d habitantes\n", nomePais1, populacao1);
            printf("%s: %d habitantes\n", nomePais2, populacao2);
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            break;

        case 2: // Área
            printf("1º Atributo: Area\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            break;

        case 3: // PIB
            printf("1º Atributo: PIB\n");
            printf("%s: %.2f bilhoes\n", nomePais1, pib1);
            printf("%s: %.2f bilhoes\n", nomePais2, pib2);
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            break;

        case 4: // Pontos turísticos
            printf("1º Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomePais2, pontosTuristicos2);
            valor1Carta1 = pontosTuristicos1;
            valor1Carta2 = pontosTuristicos2;
            break;

        case 5: // Densidade (menor vence)
            printf("1º Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidade1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidade2);
            valor1Carta1 = densidade1;
            valor1Carta2 = densidade2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ======== SEGUNDO ATRIBUTO ========
    printf("\n");
    switch (opcao2) {
        case 1:
            printf("2º Atributo: Populacao\n");
            printf("%s: %d habitantes\n", nomePais1, populacao1);
            printf("%s: %d habitantes\n", nomePais2, populacao2);
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            break;

        case 2:
            printf("2º Atributo: Area\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            break;

        case 3:
            printf("2º Atributo: PIB\n");
            printf("%s: %.2f bilhoes\n", nomePais1, pib1);
            printf("%s: %.2f bilhoes\n", nomePais2, pib2);
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            break;

        case 4:
            printf("2º Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomePais2, pontosTuristicos2);
            valor2Carta1 = pontosTuristicos1;
            valor2Carta2 = pontosTuristicos2;
            break;

        case 5:
            printf("2º Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidade1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidade2);
            valor2Carta1 = densidade1;
            valor2Carta2 = densidade2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ======== COMPARAÇÃO E SOMA ========

    // Regra: maior vence, exceto densidade (menor vence)
    float pontos1 = 0, pontos2 = 0;

    // --- 1º atributo ---
    if (opcao1 == 5) { // Densidade (menor vence)
        if (valor1Carta1 < valor1Carta2) pontos1++;
        else if (valor1Carta2 < valor1Carta1) pontos2++;
    } else { // Maior vence
        if (valor1Carta1 > valor1Carta2) pontos1++;
        else if (valor1Carta2 > valor1Carta1) pontos2++;
    }

    // --- 2º atributo ---
    if (opcao2 == 5) { // Densidade (menor vence)
        if (valor2Carta1 < valor2Carta2) pontos1++;
        else if (valor2Carta2 < valor2Carta1) pontos2++;
    } else {
        if (valor2Carta1 > valor2Carta2) pontos1++;
        else if (valor2Carta2 > valor2Carta1) pontos2++;
    }

    // Soma total (para exibição)
    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;

    printf("\n===== SOMA DOS ATRIBUTOS =====\n");
    printf("%s: %.2f\n", nomePais1, somaCarta1);
    printf("%s: %.2f\n", nomePais2, somaCarta2);

    // ======== RESULTADO FINAL ========
    printf("\n===== RESULTADO FINAL =====\n");
    if (somaCarta1 > somaCarta2)
        printf("Vencedor: %s 🏆\n", nomePais1);
    else if (somaCarta2 > somaCarta1)
        printf("Vencedor: %s 🏆\n", nomePais2);
    else
        printf("Empate!\n");

    return 0;
}
