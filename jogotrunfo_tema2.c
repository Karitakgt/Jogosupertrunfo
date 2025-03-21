#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    //Definição das variáveis das Cartas 01 e 02:
    char estado01, estado02;
    char codigo01[20], codigo02[20];
    char nome_cidade01[50], nome_cidade02[50];
    unsigned long int populacao01, populacao02;
    float area01, area02;
    float pib01, pib02;
    int pontos_turisticos01, pontos_turisticos02;
    float densidadepopulacional01, densidadepopulacional02;
    float PIB_per_capita01, PIB_per_capita02;
    float superPoder01, superPoder02;
    float inverso_densidade01, inverso_densidade2;
    char carta01, carta02;
    int opcao1 = 0, opcao2 = 0;
    int escolhaUsuario;
    float resultadototal;
    float soma_carta1 = 0, soma_carta2 = 0;
    

    // Entrada dos dados da Carta 01:

    printf("*** QUALIFICAÇÃO DA CARTA 01 ***\n");
    printf("Digite a letra que representa o Estado da Carta 01 (A - H): ");
    scanf(" %c", &estado01);
    printf("Digite o código do Estado da Carta 01: ");
    scanf("%s", &codigo01);
    printf("Digite o nome da Cidade da Carta 01: ");
    scanf("%s", &nome_cidade01);
    printf("Digite a população da Carta 01: ");
    scanf("%lu", &populacao01);
    printf("Digite a área da Carta 01 (km²): ");
    scanf("%f", &area01);
    printf("Digite o PIB da Carta 01: ");
    scanf("%f", &pib01);
    printf("Digite o número dos pontos turísticos da Carta 01: ");
    scanf("%d", &pontos_turisticos01);

    // Entrada dos dados da Carta 02:

    printf("*** QUALIFICAÇÃO DA CARTA 02 ***\n");
    printf("Digite a letra que representa o Estado da Carta 02 (A - H): ");
    scanf(" %c", &estado02);
    printf("Digite o código do Estado da Carta 02: ");
    scanf("%s", &codigo02);
    printf("Digite o nome da Cidade da Carta 02: ");
    scanf("%s", &nome_cidade02);
    printf("Digite a população da Carta 02: ");
    scanf("%lu", &populacao02);
    printf("Digite a área da Carta 02 (km²): ");
    scanf("%f", &area02);
    printf("Digite o PIB da Carta 02: ");
    scanf("%f", &pib02);
    printf("Digite o número dos pontos turísticos da Carta 02: ");
    scanf("%d", &pontos_turisticos02);

    //Cálculo da Densidade Populacional da Carta 01 e da Carta 02:

    densidadepopulacional01 = populacao01 / area01;
    densidadepopulacional02 = populacao02 / area02;

    // Cálculo do PIB per capita da Carta 01 e da Carta 02:

    PIB_per_capita01 = pib01 / populacao01;
    PIB_per_capita02 = pib02 / populacao02;

    // Cálculo do Super Poder
    inverso_densidade01 = area01 / populacao01;
    inverso_densidade2 = area02 / populacao02;

    superPoder01 = populacao01 + area01 + pib01 + pontos_turisticos01 + inverso_densidade01 + PIB_per_capita01;
    superPoder02 = populacao02 + area02 + pib02 + pontos_turisticos02 + inverso_densidade2 + PIB_per_capita02;
    
    
    //  Exibição dos dados fornecidos pelo usuário da Carta 01 e da Carta 02

    printf("*** CARTA 01 (%s) ***\n", nome_cidade01);
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Cidade: %s\n", nome_cidade01);
    printf("População: %lu habitantes \n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional01);
    printf("PIB per capita: %.2f bilhões de reais\n", PIB_per_capita01);

    printf("*** CARTA 02 (%s) ***\n", nome_cidade02);
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Cidade: %s\n", nome_cidade02);
    printf("População: %lu habitantes \n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional02);
    printf("PIB per capita é: %.2f bilhões de reais\n", PIB_per_capita02);

    // ===== MENU INTERATIVO - Escolha dos atributos =====

    // Primeiro atributo:
    if (opcao1 < 1 || opcao1 > 7){
    printf("*** MENU PRINCIPAL ***\n");
    printf("Escolha o PRIMEIRO atributo para ser comparado: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB per capita\n");
    printf("5. Pontos turísticos (número)\n");
    printf("6. Densidade Populacional\n");
    printf("7. Super Poder\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao1);

    switch (opcao1){
        case 1: case 2: case 3: case 4: case 5: case 6: case 7:
        printf("Você escolheu a opção %d!\n", opcao1);
        break;
        default:
        printf("Opção inválida! Tente novamente\n");
        
    }

    }

    // Segundo Atributo (diferente do primeiro)
    if (opcao2 < 1 || opcao2 > 7 == opcao1) {
        printf("\n Escolha o SEGUNDO atributo para ser comparado (diferente do primeiro): \n");
    if (escolhaUsuario = 1 && escolhaUsuario <= 7 && escolhaUsuario++) {
        if (escolhaUsuario != opcao1){
            switch (escolhaUsuario)
            {
            case 1:
            printf("1. População\n");
                break;
                
            case 2:
            printf("2. Área\n");
                    break;
            case 3: 
            printf("3. PIB\n");
            break;

            case 4:
            printf("4. PIB per capita\n");
            break;

            case 5:
            printf("5. Pontos turísticos (número)\n");
                break;
            case 6:
            printf("6. Densidade Populacional\n");
            break;

            case 7:
            printf("7. Super Poder");
            break;
            }
        }
    }
    
    printf("Escolha uma opção (1 a 7): ");
    scanf("%d", &opcao2);

    if (opcao2 < 1 || opcao2 > 7){
        printf("Opção inválida! Tente novamente!\n");
    } else if (opcao2 == opcao1){
        printf("Você já escolheu esse atributo antes! Escolha outro.\n");
    } else {
        printf("Você escolheu a opção %d!\n", opcao2);
    }
    }
        
    // Resultado das escolhas:
    printf("\n Atributos escolhidos para comparação: \n");
    printf("Primeiro atributo: (%d)\n", opcao1);
    printf("Segundo atributo: (%d)\n", opcao2);
    
    // Comparação entre os atributos escolhidos das Cartas 01 e 02

    switch (opcao1)
    {
    case 1:
        printf("*** PRIMEIRO ATRIBUTO: POPULAÇÃO!\n");

        printf("Carta 01 - (%s): %ul\n", nome_cidade01, populacao01);
        printf("Carta 02 - (%s): %ul\n", nome_cidade02, populacao02);

        populacao01 > populacao02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
       
        break;
        
    case 2:
        printf("*** PRIMEIRO ATRIBUTO: ÁREA!\n");

        printf("Carta 01 - (%s): %.2f\n", nome_cidade01, area01);
        printf("Carta 02 - (%s): %.2f\n", nome_cidade02, area02);

        area01 > area02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);

        break;
    
    case 3:
        printf("*** PRIMEIRO ATRIBUTO: PIB!\n");

        printf("Carta 01 - (%s): %.2f\n", nome_cidade01, pib01);
        printf("Carta 02 - (%s): %.2f\n", nome_cidade02, pib02);

        pib01 > pib02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
        break;

    case 4:
        printf("*** PRIMEIRO ATRIBUTO: PIB per capita!\n");

        printf("Carta 01 - (%s): %.2f\n", nome_cidade01, PIB_per_capita01);
        printf("Carta 02 - (%s): %.2f\n", nome_cidade02, PIB_per_capita02);

        PIB_per_capita01 > pib02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
        break;

    case 5:
        printf("*** PRIMEIRO ATRIBUTO: Pontos Turísticos (número)!\n");

        printf("Carta 01 - (%s): %d\n", nome_cidade01, pontos_turisticos01);
        printf("Carta 02 - (%s): %d\n", nome_cidade02, pontos_turisticos02);

        pontos_turisticos01 > pontos_turisticos02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
        break;

    case 6:
        printf("*** PRIMEIRO ATRIBUTO: Densidade Populacional!\n");

        printf("Carta 01 - (%s): %.2f\n", nome_cidade01, densidadepopulacional01);
        printf("Carta 02 - (%s): %.2f\n", nome_cidade02, densidadepopulacional02);

        densidadepopulacional01 < densidadepopulacional02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
        break;

    case 7:
        printf("*** PRIMEIRO ATRIBUTO: Super Poder!\n");

        printf("Carta 01 - (%s): %.2f\n", nome_cidade01, superPoder01);
        printf("Carta 02 - (%s): %.2f\n", nome_cidade02, superPoder02);

        superPoder01 > superPoder02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
        break;

    default:
        printf("Opção inválida\n");
        break;
    }

    // Análise individual do segundo atributo:

    switch (opcao2)
    {
    case 1:
        printf("*** SEGUNDO ATRIBUTO: POPULAÇÃO!\n");

        printf("Carta 01 - (%s): %ul\n", nome_cidade01, populacao01);
        printf("Carta 02 - (%s): %ul\n", nome_cidade02, populacao02);

        populacao01 > populacao02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
       
        break;
        
    case 2:
        printf("*** SEGUNDO ATRIBUTO: ÁREA!\n");

        printf("Carta 01 - (%s): %.2f\n", nome_cidade01, area01);
        printf("Carta 02 - (%s): %.2f\n", nome_cidade02, area02);

        area01 > area02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);

        break;
    
    case 3:
        printf("*** SEGUNDO ATRIBUTO: PIB!\n");

        printf("Carta 01 - (%s): %.2f\n", nome_cidade01, pib01);
        printf("Carta 02 - (%s): %.2f\n", nome_cidade02, pib02);

        pib01 > pib02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
        break;

    case 4:
        printf("*** SEGUNDO ATRIBUTO: PIB per capita!\n");

        printf("Carta 01 - (%s): %.2f\n", nome_cidade01, PIB_per_capita01);
        printf("Carta 02 - (%s): %.2f\n", nome_cidade02, PIB_per_capita02);

        PIB_per_capita01 > pib02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
        break;

    case 5:
        printf("*** SEGUNDO ATRIBUTO: Pontos Turísticos (número)!\n");

        printf("Carta 01 - (%s): %d\n", nome_cidade01, pontos_turisticos01);
        printf("Carta 02 - (%s): %d\n", nome_cidade02, pontos_turisticos02);

        pontos_turisticos01 > pontos_turisticos02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
        break;

    case 6:
        printf("*** SEGUNDO ATRIBUTO: Densidade Populacional!\n");

        printf("Carta 01 - (%s): %.2f\n", nome_cidade01, densidadepopulacional01);
        printf("Carta 02 - (%s): %.2f\n", nome_cidade02, densidadepopulacional02);

        densidadepopulacional01 < densidadepopulacional02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
        break;

    case 7:
        printf("*** SEGUNDO ATRIBUTO: Super Poder!\n");

        printf("Carta 01 - (%s): %.2f\n", nome_cidade01, superPoder01);
        printf("Carta 02 - (%s): %.2f\n", nome_cidade02, superPoder02);

        superPoder01 > superPoder02 ? printf("Resultado: A Carta 01 (%s) venceu!\n", nome_cidade01) : printf("Resultado: A Carta 02 (%s) venceu!\n", nome_cidade02);
        break;

    default:
        printf("Opção inválida\n");
        break;
    }

    // SOMA DOS ATRIBUTOS:

    printf("*** RESULTADO DA SOMA DOS ATRIBUTOS ESCOLHIDOS PARA CADA CARTA: %d e %d : ***\n", opcao1, opcao2);
    printf("Carta 01 (%s): %.2f\n", nome_cidade01, soma_carta1);
    printf("Carta 02 (%s): %.2f\n", nome_cidade02, soma_carta2);

    if (soma_carta1 > soma_carta2){
        printf("Resultado: Carta 01 (%s) venceu a rodada pela soma dos atributos!\n", nome_cidade01);
    } else if (soma_carta2 > soma_carta1)
    {
        printf("Resultado: Carta 02 (%s) venceu a rodada pela soma dos atributos!\n", nome_cidade02);
    } else {
        printf("Resultado: Empate na soma dos atributos!\n");
    }

    
    return 0;

}
