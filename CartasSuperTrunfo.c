#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    float populacao, area, pib;
    int pontosturisticos, estado;
    char cidade[1];

// Início do jogo, cadastrando a carta

    printf(" --- Bem vindo ao SuperTrunfo de Países! ---\n\n");
    printf("Para começar, cadastre sua carta! \n");
    printf("Cidade: \n");
    scanf("%s" &cidade);
    printf("Agora, cadastre seu estado: \n");
    scanf("%d" %estado);
    printf("Qual a população da sua cidade? \n");
    scanf("%f" &populacao);
    printf("Qual a Área da sua cidade? \n");
    scanf("%f" &area);
    printf("Agora informe o PIB da sua cidade: \n");
    scanf("%f" %pib);
    printf("Para finalizar, quantos pontos turísticos tem na sua cidade?");

// Agora é hora de informar ao usuário, a carta que ele cadastrou
// Informando a carta cadastrada.

    printf("Carta: %s %d\n", cidade, estado);
    printf("População: %f\n");
    printf("Área: %f\n");
    printf("PIB: %f\n");
    printf("Números de pontos turísticos %d\n");









    return 0;
}
