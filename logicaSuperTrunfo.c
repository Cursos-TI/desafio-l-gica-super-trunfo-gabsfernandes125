#include <stdio.h>
int main (){

    //organização e declaração de variáveis
int opcaofinal, codigo1, codigo2, npontos1, npontos2;
char carta1[2], carta2[2], estado1[3], estado2[3], cidade1[50], cidade2[50]; 
float pop1, pop2, area1, area2, PIB1, PIB2, densidade1, densidade2;

printf ("\n\n======================================");
printf ("\n====== BEM-VINDO AO SUPER TRUNFO ======");
printf ("\n======================================\n\n");


    //primeira sessão de entradas - CARTA 1.

printf (">>>>>>>>>> CARTA 1 <<<<<<<<<\n");
    printf ("Carta: ");
    scanf ("%1s", carta1);

printf ("Estado: ");
    scanf ("%2s", estado1);

printf ("Codigo: %2s", estado1);
    scanf ("%d", &codigo1);

printf ("Nome da cidade: ");
    scanf ("%49s", cidade1);

printf ("Populacao: ");
    scanf ("%f", &pop1);

printf ("Area (em M quadrado): ");
        scanf ("%f", &area1);

printf ("PIB: ");
    scanf ("%f", &PIB1);

printf ("Numeros de pontos turisticos: ");
    scanf ("%d", &npontos1);

printf ("Densidade populacional: %f\n", pop1/area1);

printf ("PIB per capita: %f", PIB1/pop1); 


//segunda sessão de entrdas - CARTA 2.

printf ("\n\n>>>>>>>>>> CARTA 2 <<<<<<<<<\n");
    printf ("Carta: ");
    scanf ("%1s", carta2);

printf ("Estado: ");
    scanf ("%2s", estado2);

printf ("Codigo: %2s", estado2);
    scanf ("%d", &codigo2);

printf ("Nome da cidade: ");
    scanf ("%49s", cidade2);

printf ("Populacao: ");
    scanf ("%f", &pop2);

printf ("Area (em M quadrado): ");
    scanf ("%f", &area2);

printf ("PIB: ");
    scanf ("%f", &PIB2);

printf ("Numeros de pontos turisticos: ");
    scanf ("%d", &npontos2);

do {
printf ("\n\n\n>>>>> AGORA COMPARE OS VALORES E VEJA QUEM GANHA: <<<<<<\n");
    printf ("1 - POPULACOES\n");
        printf ("2 - AREA\n");
            printf ("3 - PIB\n");
                printf ("4 - NUMERO DE PONTOS TURISTICOS\n");
                    printf ("5 - DENSIDADE POPULACIONAL\n");
                        printf ("6 - PIB PER CAPITA\n");
scanf ("%d", &opcaofinal);

switch (opcaofinal){//CHAVE DE ABERTURA DO SWITCH
    case 1:
        if (pop1 >= pop2){
            printf ("---> ENTRE POPULACOES: %s(%s) VENCE <---", cidade1, estado1);
        }
        else {
            printf ("---> ENTRE POPULACOES: %s(%s) VENCE <---", cidade2, estado2);
        }
        break;

    case 2:
        if (area1 >= area2){
            printf ("---> ENTRE AREAS: %s(%s) VENCE <---", cidade1, estado1);
        }
        else {
            printf ("---> ENTRE AREAS: %s(%s) VENCE <---", cidade2, estado2);
        }
        break;

    case 3: 
        if (PIB1 >= PIB2){
            printf ("---> ENTRE PIB's: %s(%s) VENCE <---", cidade1, estado1);
        }
        else {
            printf ("---> ENTRE PIB's: %s(%s) VENCE <---", cidade2, estado2);
        }
        break;

    case 4:
        if (npontos1 >= npontos2){
            printf ("---> ENTRE PONTOS TURISTICOS: %s(%s) VENCE <---", cidade1, estado1);
        }
        else {
            printf ("---> ENTRE PONTOS TURISTICOS: %s(%s) VENCE <---", cidade2, estado2);
        }
        break;    
    
    case 5:
        if (densidade1/pop1 >= densidade2/pop2){
            printf ("---> ENTRE DENSIDADES: %s(%s) VENCE <---", cidade1, estado1);
        }
        else {
            printf ("---> ENTRE DENSIDADES: %s(%s) VENCE <---", cidade2, estado2);
        }
        break;


    case 6:
        if (PIB1/pop1 >= PIB2/pop2){
        printf ("---> ENTRE PIB's PER CAPITA: %s(%s) VENCE <---", cidade1, estado1);
        }
        else {
        printf ("---> ENTRE PIB's PER CAPITA: %s(%s) VENCE <---", cidade2, estado2);
        }
        break;

    default: {
        printf ("OPCAO INVALIDA");
    }

    }//CHAVE DE FECHAMENTO DO SWITCH

}
    while (opcaofinal <= 6);
        printf ("\n\n\nSAINDO...\n\n\n");

printf ("\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>> FIMMMMMMMMMMM :-) <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");

return 0;
}
