#include <stdio.h>
#include <string.h>

int main() {
    // Organização e declaração de variáveis
    int opcaofinal, codigo1, codigo2, npontos1, npontos2;
    char carta1[2], carta2[2], estado1[3], estado2[3], cidade1[50], cidade2[50]; 
    float pop1, pop2, area1, area2, PIB1, PIB2, densidade1, densidade2;

    printf("\n\n======================================");
    printf("\n====== BEM-VINDO AO SUPER TRUNFO ======");
    printf("\n======================================\n\n");

    // Primeira sessão de entradas - CARTA 1
    printf(">>>>>>>>>> CARTA 1 <<<<<<<<<\n");

    printf("Carta (EX.: A, B, C...): ");
    scanf("%1s", carta1);

    printf("Estado: ");
    scanf("%2s", estado1);

    printf("Codigo: ");
    scanf("%d", &codigo1);

    // Limpa o buffer antes do fgets
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%f", &pop1);

    printf("Area (em M quadrado): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &npontos1);

    densidade1 = pop1 / area1;

    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", PIB1 / pop1); 


    // Segunda sessão de entradas - CARTA 2
    printf("\n\n>>>>>>>>>> CARTA 2 <<<<<<<<<\n");

    printf("Carta (EX.: A, B, C...): ");
    scanf("%1s", carta2);

    printf("Estado: ");
    scanf("%2s", estado2);

    printf("Codigo: ");
    scanf("%d", &codigo2);

    // Limpa o buffer antes do fgets
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%f", &pop2);

    printf("Area (em M quadrado): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &npontos2);

    densidade2 = pop2 / area2;

    do {
        printf("\n\n\n>>>>> AGORA COMPARE OS VALORES E VEJA QUEM GANHA: <<<<<<\n");
        printf("1 - POPULACAO\n");
        printf("2 - AREA\n");
        printf("3 - PIB\n");
        printf("4 - NUMERO DE PONTOS TURISTICOS\n");
        printf("5 - DENSIDADE POPULACIONAL\n");
        printf("6 - PIB PER CAPITA\n");
        printf("7 - SAIR\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaofinal);

        switch (opcaofinal) {
            case 1:
                if (pop1 >= pop2) {
                    printf("---> ENTRE POPULACOES: %s (%s) VENCE <---\n", cidade1, estado1);
                } else {
                    printf("---> ENTRE POPULACOES: %s (%s) VENCE <---\n", cidade2, estado2);
                }
                break;

            case 2:
                if (area1 >= area2) {
                    printf("---> ENTRE AREAS: %s (%s) VENCE <---\n", cidade1, estado1);
                } else {
                    printf("---> ENTRE AREAS: %s (%s) VENCE <---\n", cidade2, estado2);
                }
                break;

            case 3:
                if (PIB1 >= PIB2) {
                    printf("---> ENTRE PIBs: %s (%s) VENCE <---\n", cidade1, estado1);
                } else {
                    printf("---> ENTRE PIBs: %s (%s) VENCE <---\n", cidade2, estado2);
                }
                break;

            case 4:
                if (npontos1 >= npontos2) {
                    printf("---> ENTRE PONTOS TURISTICOS: %s (%s) VENCE <---\n", cidade1, estado1);
                } else {
                    printf("---> ENTRE PONTOS TURISTICOS: %s (%s) VENCE <---\n", cidade2, estado2);
                }
                break;

            case 5:
                if (densidade1 >= densidade2) {
                    printf("---> ENTRE DENSIDADES: %s (%s) VENCE <---\n", cidade1, estado1);
                } else {
                    printf("---> ENTRE DENSIDADES: %s (%s) VENCE <---\n", cidade2, estado2);
                }
                break;

            case 6:
                if ((PIB1 / pop1) >= (PIB2 / pop2)) {
                    printf("---> ENTRE PIBs PER CAPITA: %s (%s) VENCE <---\n", cidade1, estado1);
                } else {
                    printf("---> ENTRE PIBs PER CAPITA: %s (%s) VENCE <---\n", cidade2, estado2);
                }
                break;

            case 7:
                printf("\n\nSAINDO...\n\n");
                break;

            default:
                printf("OPCAO INVALIDA\n");
                break;
        }

    } while (opcaofinal != 7);

    printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>> FIMMMMMMMMMMM :-) <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");

    // LINK DO GITHUB
    // https://github.com/Cursos-TI/desafio-l-gica-super-trunfo-gabsfernandes125    

    return 0;
}
