#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gabriel

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
      
    
    
      // Área para definição das variáveis para armazenar as propriedades das cidades
     
      char l_estado1;
      char cod1[4];
      char n_cidade1[20];
      int populacao1;        //variaveis da carta-1
      int p_turistico1;
      float km1;
      float pib1;
      
      
      char l_estado2;
      char cod2[4];
      char n_cidade2[20];
      int populacao2;       //variaveis a carta-2
      int p_turistico2;
      float km2;
      float pib2;
       

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
          scanf(" %d", &populacao1);

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
          scanf("  %d",  &populacao2);

          printf("insira a Área (em Km²): \n");
          scanf(" %f", &km2);

          printf("insira o pib da cidade: \n");
          scanf(" %f", &pib2);

          printf("insira o número e pontos turísticos:\n");
          scanf(" %d", &p_turistico2);


               printf("\nótimo sua 2º carta foi registrada com sucesso!\n"); 
               printf("aqui estão os dados cadastrados \n");     //mensagem de confirmação carta-2
               

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

                // Área para exibição dos dados da cidade
  
             // Exibição dos dados da Carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Estado: %c\n", l_estado1);
                printf("Código: %s\n", cod1);
                printf("Cidade: %s\n", n_cidade1);
                printf("População: %d habitantes\n", populacao1);
                printf("Área: %.5f km²\n", km1);
                printf("PIB: %.2f bilhões\n", pib1);
                printf("Pontos turísticos: %d\n", p_turistico1);
            
            
            
             // Exibição dos dados da Carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Estado: %c\n", l_estado2);
                printf("Código: %s\n", cod2);
                printf("Cidade: %s\n", n_cidade2);
                printf("População: %d habitantes\n", populacao2);
                printf("Área: %.5f km²\n", km2);
                printf("PIB: %.2f bilhões\n", pib2);
                printf("Pontos turísticos: %d\n", p_turistico2);
              
             

    return 0;
}
