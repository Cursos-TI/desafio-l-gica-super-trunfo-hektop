#include <stdio.h>

struct Carta {
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;
    int escolha1, escolha2;

    // Entrada de dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área em km²: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Entrada de dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área em km²: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Escolha dos atributos para comparação
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);
    printf("Escolha o segundo atributo: ");
    scanf("%d", &escolha2);

    // Comparação do primeiro atributo escolhido
    printf("\nResultado da comparação do primeiro atributo:\n");
    switch (escolha1) {
        case 1:
            if (carta1.populacao > carta2.populacao)
                printf("A primeira carta tem maior população.\n");
            else if (carta1.populacao < carta2.populacao)
                printf("A segunda carta tem maior população.\n");
            else
                printf("As cartas têm a mesma população.\n");
            break;
        case 2:
            if (carta1.area > carta2.area)
                printf("A primeira carta tem maior área.\n");
            else if (carta1.area < carta2.area)
                printf("A segunda carta tem maior área.\n");
            else
                printf("As cartas têm a mesma área.\n");
            break;
        case 3:
            if (carta1.pib > carta2.pib)
                printf("A primeira carta tem maior PIB.\n");
            else if (carta1.pib < carta2.pib)
                printf("A segunda carta tem maior PIB.\n");
            else
                printf("As cartas têm o mesmo PIB.\n");
            break;
        case 4:
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("A primeira carta tem mais pontos turísticos.\n");
            else if (carta1.pontos_turisticos < carta2.pontos_turisticos)
                printf("A segunda carta tem mais pontos turísticos.\n");
            else
                printf("As cartas têm o mesmo número de pontos turísticos.\n");
            break;
        default:
            printf("Opção inválida para o primeiro atributo.\n");
    }

    // Comparação do segundo atributo escolhido
    printf("\nResultado da comparação do segundo atributo:\n");
    switch (escolha2) {
        case 1:
            if (carta1.populacao > carta2.populacao)
                printf("A primeira carta tem maior população.\n");
            else if (carta1.populacao < carta2.populacao)
                printf("A segunda carta tem maior população.\n");
            else
                printf("As cartas têm a mesma população.\n");
            break;
        case 2:
            if (carta1.area > carta2.area)
                printf("A primeira carta tem maior área.\n");
            else if (carta1.area < carta2.area)
                printf("A segunda carta tem maior área.\n");
            else
                printf("As cartas têm a mesma área.\n");
            break;
        case 3:
            if (carta1.pib > carta2.pib)
                printf("A primeira carta tem maior PIB.\n");
            else if (carta1.pib < carta2.pib)
                printf("A segunda carta tem maior PIB.\n");
            else
                printf("As cartas têm o mesmo PIB.\n");
            break;
        case 4:
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("A primeira carta tem mais pontos turísticos.\n");
            else if (carta1.pontos_turisticos < carta2.pontos_turisticos)
                printf("A segunda carta tem mais pontos turísticos.\n");
            else
                printf("As cartas têm o mesmo número de pontos turísticos.\n");
            break;
        default:
            printf("Opção inválida para o segundo atributo.\n");
    }

    return 0;
}
