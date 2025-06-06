#include <stdio.h>
#include <string.h>

    int main () {
      
        //Opção escolhida pelo usuário no Menu do Jogo
        int opcao, atributo;
      
        //Código da Carta
        char codigo1 [50], codigo2 [50];

        //Nome do país
        char pais_1 [50], pais_2 [50];

        //População
        unsigned long int populacao_1, populacao_2;

        //Área
        float area_1, area_2;

        //PIB
        float pib_1, pib_2;

        //Número de pontos turísticos
        int num_pontos_turisticos_1, num_pontos_turisticos_2;

        //Densidade Demográfica
        float densidade_dem_1, densidade_dem_2;

        //PIB per capita
        float pib_per_capita_1, pib_per_capita_2;

        printf ("\n");
        printf ("Olá! Seja bem vindo ao Super Trunfo! Escolha a opção desejada: \n");
        printf ("\n");
        printf ("1. Iniciar Jogo\n");
        printf ("2. Regras do Super Trunfo\n");
        printf ("3. Sair do Jogo\n");
        scanf ("%d", &opcao);

        switch (opcao) {
          case 1:
            printf ("MUITO BEM! Vamos cadastrar as cartas?\n");
            printf ("\n");

            printf ("Digite o código da primeira carta: ");
            scanf ("%s",codigo1);
            getchar ();
            printf ("\n");
            
            printf ("Digite o nome do País: \n");
            fgets (pais_1, 50, stdin);
            
            // Remove o '\n' inserido pelo fgets
            pais_1 [strcspn(pais_1, "\n")] = 0;
            printf ("\n");
    
            printf ("Digite a quantidade de habitantes desse País: ");
            scanf ("%lu",&populacao_1);
            printf ("\n");
    
            printf ("Digite a área do país em km²: ");
            scanf ("%f",&area_1);
            printf ("\n");
    
            printf ("Digite o PIB do País: ");
            scanf ("%f",&pib_1);
            printf ("\n");
    
            printf ("Digite o Número de pontos turísticos do País: ");
            scanf ("%d",&num_pontos_turisticos_1);
            printf ("\n");
    
    
            printf ("MUITO BEM! Agora vamos cadastrar a segunda Carta\n");
    
            printf ("\n");
    
            printf ("Digite o código da segunda carta: ");
            scanf ("%s",codigo2);
            getchar ();
            printf ("\n");
    
            printf ("Digite o nome do País: ");
            fgets (pais_2, 50, stdin);
            pais_2 [strcspn (pais_2, "\n")] = 0;
            printf ("\n");
    
            printf ("Digite a quantidade de habitantes desse País: ");
            scanf ("%lu",&populacao_2);
            printf ("\n");
    
            printf ("Digite a área do país em km²: ");
            scanf ("%f",&area_2);
            printf ("\n");
    
            printf ("Digite o PIB desse País: ");
            scanf ("%f",&pib_2);
            printf ("\n");
    
            printf ("Digite o Número de pontos turísticos desse País: ");
            scanf ("%d",&num_pontos_turisticos_2);
            printf ("\n");
    
            printf ("\n");
    
            printf ("CADASTRO CONCLUÍDO\n");
            printf ("\n");
    
            densidade_dem_1 = (float) populacao_1/area_1;
            densidade_dem_2 = (float) populacao_2/area_2;
            pib_per_capita_1 = pib_1/populacao_1;
            pib_per_capita_2 = pib_2/populacao_2;
    
            printf (" COMPARAÇÃO >>> Escolha o atributo de comparação entre as cartas\n");
            printf ("\n");
            printf (" 1. Nome\n");
            printf ("2. População\n");
            printf ("3. Área (km²)\n");
            printf ("4. PIB\n");
            printf ("5. Número de Pontos Turísticos\n");
            printf ("6. Densidade Demográfica\n");
            printf ("\n");
            printf ("Atributo: ");
            scanf ("%d", &atributo);
            printf ("\n");
              
              switch (atributo) {
                  case 1:
                   printf ("Carta 01: %s\n", pais_1);
                   printf ("Carta 02: %s\n", pais_2);
                  break;
                  
                  case 2:
                     if (populacao_1 > populacao_2) {
                        printf ("CARTA 01 (%s) VENCEU!\n", codigo1);
                        printf ("Atributo: População\n");
                        printf ("População de %s: %lu habitantes\n", pais_1, populacao_1);
                        printf ("População de %s: %lu habitantes\n", pais_2, populacao_2);
                     }
                     else if (populacao_2 > populacao_1) {
                        printf ("CARTA 02 (%s) VENCEU!\n", codigo2);
                        printf ("Atributo: População\n");
                        printf ("População de %s: %lu habitantes\n", pais_1, populacao_1);
                        printf ("População de %s: %lu habitantes\n", pais_2, populacao_2);
                    }
                     else {
                         printf ("EMPATE\n");
                         printf ("Atributo: População\n");
                         printf ("População de %s: %lu habitantes\n", pais_1, populacao_1);
                         printf ("População de %s: %lu habitantes\n", pais_2, populacao_2);
                     }
                  break;
                  
                  case 3:
                   if (area_1 > area_2) {
                        printf ("CARTA 01 (%s) VENCEU!\n", codigo1);
                        printf ("Atributo: Área\n");
                        printf ("Área (em km²) de %s: %.2f km²\n", pais_1, area_1);
                        printf ("Área (em km²) de %s: %.2f km²\n", pais_2, area_2);
                     }
                   else if (area_2 > area_1) {
                        printf ("CARTA 02 (%s) VENCEU!\n", codigo2);
                        printf ("Atributo: Área\n");
                        printf ("Área (em km²) de %s: %.2f km²\n", pais_1, area_1);
                        printf ("Área (em km²) de %s: %.2f km²\n", pais_2, area_2);
                    }
                    else {
                        printf ("EMPATE\n");
                        printf ("Atributo: Área\n");
                        printf ("Área (em km²) de %s: %.2f km²\n", pais_1, area_1);
                        printf ("Área (em km²) de %s: %.2f km²\n", pais_2, area_2);
                    } 
                  break;

                  case 4:
                   if (pib_1 > pib_2) {
                        printf ("CARTA 01 (%s) VENCEU!\n", codigo1);
                        printf ("Atributo: PIB (Produto Interno Bruto)\n");
                        printf ("PIB de %s: R$%.2f\n", pais_1, pib_1);
                        printf ("PIB de %s: R$%.2f\n", pais_2, pib_2);
                         }
                   else if (pib_2 > pib_1) {
                        printf ("CARTA 02 (%s) VENCEU!\n", codigo2);
                        printf ("Atributo: PIB (Produto Interno Bruto)\n");
                        printf ("PIB de %s: R$%.2f\n", pais_1, pib_1);
                        printf ("PIB de %s: R$%.2f\n", pais_2, pib_2);
                    }
                    else {
                         printf ("EMPATE\n");
                         printf ("Atributo: PIB (Produto Interno Bruto)\n");
                         printf ("PIB de %s: R$%.2f\n", pais_1, pib_1);
                         printf ("PIB de %s: R$%.2f\n", pais_2, pib_2);
                    } 
                  break;

                  case 5:
                   if (num_pontos_turisticos_1 > num_pontos_turisticos_2) {
                        printf ("CARTA 01 (%s) VENCEU!\n", codigo1);
                        printf ("Atributo: Número de Pontos Turísticos\n");
                        printf ("Número de Pontos Turísticos de %s: %d\n", pais_1, num_pontos_turisticos_1);
                        printf ("Número de Pontos Turísticos de %s: %d\n", pais_2, num_pontos_turisticos_2);
                     }
                   else if (num_pontos_turisticos_2 > num_pontos_turisticos_1) {
                        printf ("CARTA 02 (%s) VENCEU!\n", codigo2);
                        printf ("Atributo: Número de Pontos Turísticos\n");
                        printf ("Número de Pontos Turísticos de %s: %d\n", pais_1, num_pontos_turisticos_1);
                        printf ("Número de Pontos Turísticos de %s: %d\n", pais_2, num_pontos_turisticos_2);
                    }
                    else {
                        printf ("EMPATE\n");
                        printf ("Atributo: Número de Pontos Turísticos\n");
                        printf ("Número de Pontos Turísticos de %s: %d\n", pais_1, num_pontos_turisticos_1);
                        printf ("Número de Pontos Turísticos de %s: %d\n", pais_2, num_pontos_turisticos_2);
                    } 
                  break;

                  case 6:
                   if (densidade_dem_1 < densidade_dem_2) {
                    printf ("CARTA 01 (%s) VENCEU!\n", codigo1);
                    printf ("Atributo: Densidade Demográfica\n");
                    printf ("Densidade Demográfica de %s: %.2f\n", pais_1, densidade_dem_1);
                    printf ("Densidade Demográfica de %s: %.2f\n", pais_2, densidade_dem_2);
                     }
                   else if (densidade_dem_2 < densidade_dem_1) {
                    printf ("CARTA 02 (%s) VENCEU!\n", codigo2);
                    printf ("Atributo: Densidade Demográfica\n");
                    printf ("Densidade Demográfica de %s: %.2f\n", pais_1, densidade_dem_1);
                    printf ("Densidade Demográfica de %s: %.2f\n", pais_2, densidade_dem_2);
                     }
                    else {
                     printf ("EMPATE\n");
                     printf ("Atributo: Densidade Demográfica\n");
                     printf ("Densidade Demográfica de %s: %.2f\n", pais_1, densidade_dem_1);
                     printf ("Densidade Demográfica de %s: %.2f\n", pais_2, densidade_dem_2);  
                    } 
                  break;

                  default:
                  printf ("Atributo inválido");
                  break;    
              break;        
              }
        break;    
        case 2:
            printf ("\n");
            printf("Regras do Super Trunfo:\n");
            printf("- Compare atributos entre países.\n");
            printf("- Vence a carta com o maior valor no atributo escolhido (OBS: No caso do atributo 'Densidade Demográfica', vence a carta com o menor valor).\n");
            printf("- Em caso de empate, ninguém vence.\n");
            break;

        case 3:
            printf("Saindo....\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;      
        }

        return 0;
    }
