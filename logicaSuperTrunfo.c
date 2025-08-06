#include <stdio.h>
#include <string.h>

int main() {
    // Organização e declaração de variáveis
    int codigo1, codigo2, npontos1, npontos2;
    char carta1[2], carta2[2], estado1[3], estado2[3], cidade1[50], cidade2[50];
    float pop1, pop2, area1, area2, PIB1, PIB2;

    printf("\n\n======================================");
    printf("\n====== BEM-VINDO AO SUPER TRUNFO ======");
    printf("\n======================================\n\n");

    // Primeira sessão de entradas - CARTA 1
    printf(">>>>>>>>>> CARTA 1 <<<<<<<<<\n");

    printf("Carta: (EX.: A, B, C...): ");
    scanf("%1s", carta1);

    printf("Estado: ");
    scanf("%2s", estado1);

    printf("Codigo: %s", estado1);
    scanf("%d", &codigo1);

    getchar(); // limpa o \n pendente do scanf
    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%f", &pop1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &npontos1);

    // Segunda sessão de entradas - CARTA 2
    printf("\n\n>>>>>>>>>> CARTA 2 <<<<<<<<<\n");

    printf("Carta: (EX.: A, B, C...): ");
    scanf("%1s", carta2);

    printf("Estado: ");
    scanf("%2s", estado2);

    printf("Codigo: %s", estado2);
    scanf("%d", &codigo2);

    getchar(); // limpa o \n pendente do scanf
    printf("Nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%f", &pop2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &npontos2);

    printf("\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>> FIMMMMMMMMMMM :-) <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");

    // LINK DO GITHUB
    // https://github.com/Cursos-TI/desafio-l-gica-super-trunfo-gabsfernandes125

    return 0;
}
