#include <stdio.h>
#include <conio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(void) {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
      
    
    
      // Área para definição das variáveis para armazenar as propriedades das cidades
     
      char l_estado1;
      char cod1[4];
      char n_cidade1[20];
      unsigned long int populacao1;        //variaveis da carta-1
      int p_turistico1;
      float km1;
      float pib1;

      float den_pop1;       //população dividida pela area
      float pib_cap1;       //pib divida pela população
      
      char l_estado2;
      char cod2[4];
      char n_cidade2[20];
      unsigned long int populacao2;       //variaveis da carta-2
      int p_turistico2;
      float km2;
      float pib2;

      float den_pop2;
      float pib_cap2;       


      float super_poder1;    // variavél do super poder
      float super_poder2;
     
      int campea;            //* variavel da campeã
      
      int menu;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
      
        // Área para entrada de dados
    printf("olá seja bem vindo ao super trunfo cidades\n");
    printf("insira as informações das cartas\n\n");
    
         //carta-1 ----------
  
          printf("uma letra de 'A' a 'H' representando o estado \n");
          scanf(" %c", &l_estado1);

          printf("Digite o código (Letra escolhida + número de '01' a '04'): \n");
          scanf(" %s", cod1);

          printf("escreva o nome da cidade: \n");
          scanf(" %19[^\n]", n_cidade1);         //Para aceitar espaços no nome da cidade, utilizei esse recurso

          printf("insira a população da cidade: \n");
          scanf(" %lu", &populacao1);

          printf("insira a Área (em Km²): \n");
          scanf(" %f", &km1);

          printf("insira o pib da cidade: \n");
          scanf(" %f", &pib1);

          printf("insira o número e pontos turísticos: \n");
          scanf(" %d", &p_turistico1);
          
          
          
               printf("\nótimo sua 1º carta foi registrada com sucesso!\n"); 
               printf("agora vamos preencher os dados da proxima carta\n \n");     //mensagem de confirmação carta-1
          
         //carta-2 ----------


          printf("uma letra de 'A' a 'H' representando o estado: \n");
          scanf(" %c", &l_estado2);

          printf("Digite o código (Letra escolhida + número de '01' a '04'): \n");
          scanf(" %s", cod2);

          printf("escreva o nome da cidade: \n");
          scanf(" %19[^\n]", n_cidade2);

          printf("insira a população da cidade:  \n");
          scanf("  %lu",  &populacao2);

          printf("insira a Área (em Km²): \n");
          scanf(" %f", &km2);

          printf("insira o pib da cidade: \n");
          scanf(" %f", &pib2);

          printf("insira o número e pontos turísticos:\n");
          scanf(" %d", &p_turistico2);


               printf("\nótimo sua 2º carta foi registrada com sucesso!\n"); 
               printf("aqui estão os dados cadastrados \n\n\n\n");     //mensagem de confirmação carta-2
               

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

                // Área para exibição dos dados da cidade
  
             // Exibição dos dados da Carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Estado: %c\n", l_estado1);
                printf("Código: %s\n", cod1);
                printf("Cidade: %s\n", n_cidade1);
                printf("População: %.3lu habitantes\n", populacao1);
                printf("Área: %.5f km²\n", km1);
                den_pop1 =(float) populacao1 / km1;
                printf("Densidade populacional: %.5f hab/km² \n", den_pop1);
                printf("PIB: %.2f bilhões\n", pib1);
                pib_cap1 =(float) pib1 / populacao1;
                printf("PIB per capta: %.3f reais\n", pib_cap1);
                printf("Pontos turísticos: %d\n", p_turistico1);
            
            
            
             // Exibição dos dados da Carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Estado: %c\n", l_estado2);
                printf("Código: %s\n", cod2);
                printf("Cidade: %s\n", n_cidade2);
                printf("População: %.3lu habitantes\n", populacao2);
                printf("Área: %.5f km²\n", km2);
                den_pop2 =(float) populacao2 / km2;
                printf("Densidade populacional: %.5f hab/km² \n", den_pop2);
                printf("PIB: %.2f bilhões\n", pib2);
                pib_cap2 =(float) pib2 / populacao2;
                printf("PIB per capta: %.3f reais\n", pib_cap2);
                printf("Pontos turísticos: %d\n\n", p_turistico2);
              
            
            // comparação dos super poderes carta 1 e 2 --
             printf("Hora do jogo ;¬)\n"); 
             printf("se a carta 1 vencer o resultado é (1)\n");         // mensagem de apresentação
             printf("se a carta 2 vencer o resultado é (0)\n\n"); 
             
             printf("campeã em número de habitantes: %d\n", populacao1 > populacao2);    // |  se a primeira carta for maior|
             printf("campeã em área: %d\n", km1 > km2);                                  // |a resposta é 1 mas se for menor|
             printf("campeã em densidade populacional: %d\n", den_pop1 < den_pop2);      // | a resposta sera 0 declarando  |
             printf("campeã em PIB: %d\n", pib1 > pib2);                                 // | a vitoria da segunda carta    |
             printf("campeã em PIB Per Capita: %d\n", pib_cap1 > pib_cap2);                                 
             printf("campeã em pontos turísticos: %d\n", p_turistico1 > p_turistico2);   

            // somatoria de poder total de cada carta--
            super_poder1 = populacao1 + km1 + den_pop1 + pib1 + pib_cap1 + p_turistico1;
            super_poder2 = populacao2 + km2 + den_pop2 + pib2 + pib_cap2 + p_turistico2;
            
            printf("campeã em super poder: %d\n\n", super_poder1 > super_poder2);

            //menu switch para escolher qual atributo numérico comparar com outro

            printf("agora vamos analisar cada atributo e descobrir quem ganhou em cada\n\n");
            printf("1-número de habitantes\n2-área\n3-densidade populacional\n4-pib\n5-pib per capita\n6-pontos turísticos\n7-super poder\n\n");

            printf("digite o numero correspondente de 1 a 7\n");
               scanf("%d", &menu);

       switch (menu){
    //caso 1----------------------------------      
        case 1:  
          if(populacao1 > populacao2){
             printf("A carta 1 venceu!!\n");
             printf("%ld",populacao1);
             
      }else if(populacao2 > populacao1){
             printf("A carta 2 venceu!!\n");
             printf("%ld",populacao2);
             
      }else{ printf("empate");
      }
      break;
      
    //caso 2----------------------------------       
      case 2: 
          if (km1 > km2){
             printf("A carta 1 venceu!!\n");
             printf("%.5f\n",km1);
          
     }else if(km1 < km2){
             printf("A carta 2 venceu!!\n");
             printf("%.5f\n",km2);
             
     }else{ printf("empate");
     }
      break;
      
   //caso 3---------------------------------- 
      case 3:
          if (den_pop1 < den_pop2){
             printf("A carta 1 venceu!!\n");
             printf("%.5f\n", den_pop1);
          
    }else if(den_pop2 < den_pop1){
             printf("A carta 2 venceu!!\n");
             printf("%.5f\n",den_pop2);
             
     }else{ printf("empate");
     }      
             
      break;
      
   //caso 4----------------------------------    
      case 4:
          if (pib1 > pib2){
             printf("A carta 1 venceu!!\n");
             printf("%.2f\n", pib1);
          
    }else if(pib2 > pib1){
             printf("A carta 2 venceu!!\n");
             printf("%.2f\n", pib2);
             
     }else{ printf("empate");
     }       
             
      break;
      
      
   //caso 5----------------------------------   
      case 5:  
          if (pib_cap1 > pib_cap2){
             printf("A carta 1 venceu!!\n");
             printf("%.3f\n", pib_cap1);
          
    }else if(pib_cap2 > pib_cap1){
             printf("A carta 2 venceu!!\n");
             printf("%.3f\n", pib_cap2);
             
     }else{ printf("empate");
     }      
             
      break;
      
   //caso 6----------------------------------   
      case 6:  
          if (p_turistico1 > p_turistico2){
             printf("A carta 1 venceu!!\n");
             printf("%d\n", p_turistico1);
          
      }else if(p_turistico2 > p_turistico1){
             printf("A carta 2 venceu!!\n");
             printf("%d\n", p_turistico2);
             
     }else{ printf("empate");
     }       
             
      break;
      
   //caso 7----------------------------------   
      case 7:  
          if (super_poder1 > super_poder2){
             printf("A carta 1 venceu!!\n");
             printf("%f\n", super_poder1);
          
    }else if(super_poder2 > super_poder1){
             printf("A carta 2 venceu!!\n");
             printf("%f\n", super_poder2);
             
     }else{ printf("empate");
     }    
             
      break;
      
      
}      
      
      getch();




    return 0;
}
