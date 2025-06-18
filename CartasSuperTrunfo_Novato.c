/*****************************
  CartasSuperTrunfo_Novato.c
*****************************/
#include <stdio.h>
#include <string.h>

int Populacao1, Pts_Turisticos1, Populacao2, Pts_Turisticos2;
float AreaCidade1, AreaCidade2, PIBCidade1, PIBCidade2;
char Estado1, Cdg_Carta1[4], Nome_Cidade1[20], Estado2, Cdg_Carta2[4], Nome_Cidade2[20];
/* Cdg_Carta1 e Cdg_Carta2 tem 4 posições para comportar
   os 3 caracteres + marcador de limite "\0" da string */
   
int main(void){
    printf("\t===============================\n");
    printf("\tCADASTRO DE CARTAS SUPER TRUNFO\n");
    printf("\t===============================\n\n");
    printf("Cadastro CARTA 1\n");
    printf("Digite o Estado, com 1 caractere apenas. Pressione ENTER para confirmar.\n");
    printf("[Digite uma letra (entre A e H)]\n");
    scanf("%c", &Estado1);
    printf("Digite o código da carta, com 3 caracteres. Pressione ENTER para confirmar.\n");
    printf("[Digite uma letra (entre A e H) + 0 + dígito sequencial da carta (entre 1 e 4)]\n");
    scanf("%3s", Cdg_Carta1);
/* No 'scanf' acima, atribui-se na expressão de controle um especificador de tamanho máximo de caracteres
   a serem lidos, evitando um estouro na string "Cdg_Carta1" caso haja excesso de caracteres digitados. */
    scanf("%*c");
/* O 'scanf' acima, utilizando um modificador de supressão/exclusão de caractere, serve para
   limpar o '\n' do buffer de entrada de dados e não causar um problema no 'fgets' abaixo.  */
    printf("Digite o nome da Cidade. Pressione ENTER para confirmar.\n");
    fgets(Nome_Cidade1, sizeof(Nome_Cidade1), stdin);
/* Opta-se por usar o 'fgets', na linha acima, para lidar melhor com a entrada de nomes com espaços,
   haja vista que o 'scanf' interrompe a leitura ao encontrar um tab, whitespace ou newline.*/
    Nome_Cidade1[strcspn(Nome_Cidade1, "\n")] = '\0';
/* Instrução acima utiliza uma função, que procura certo caractere e retorna sua posição no vector/string,
   para modificar o '\n' por um '\0' na string 'Nome_Cidade1' e não "poluir" a impressão em tela.  */     
    printf("Digite o número total de habitantes da cidade. Pressione ENTER para confirmar.\n");
    scanf("%d", &Populacao1);
    printf("Digite a área total da cidade, em km2. Pressione ENTER para confirmar.\n");
    scanf("%f", &AreaCidade1);
    printf("Digite o PIB da cidade, em milhões de Reais. Pressione ENTER para confirmar.\n");
    scanf("%f", &PIBCidade1);
    printf("Digite o número de pontos turísticos da cidade. Pressione ENTER para confirmar.\n");
    scanf("%d%*c", &Pts_Turisticos1); // Modificador '%*c' para limpar buffer para o próximo 'scanf'
    
    printf("\nCadastro CARTA 2\n");
    printf("Digite o Estado, com 1 caractere apenas. Pressione ENTER para confirmar.\n");
    printf("[Digite uma letra (entre A e H)]\n");
    scanf("%c", &Estado2);
    printf("Digite o código da carta, com 3 caracteres. Pressione ENTER para confirmar.\n");
    printf("[Digite uma letra (entre A e H) + 0 + dígito sequencial da carta (entre 1 e 4)]\n");
    scanf("%3s", Cdg_Carta2);
/* No 'scanf' acima, atribui-se na expressão de controle um especificador de tamanho máximo de caracteres
   a serem lidos, evitando um estouro na string "Cdg_Carta2" caso haja excesso de caracteres digitados. */
    scanf("%*c");
/* O 'scanf' acima limpa o '\n' do buffer de entrada de dados, para não causar um problema no 'fgets' abaixo. */
    printf("Digite o nome da Cidade. Pressione ENTER para confirmar.\n");
    fgets(Nome_Cidade2, sizeof(Nome_Cidade2), stdin);
/* Opta-se por usar o 'fgets', na linha acima, para lidar melhor com a entrada de nomes com espaços. */
    Nome_Cidade2[strcspn(Nome_Cidade2, "\n")] = '\0';
/* Instrução acima utilizada para trocar '\n' por um '\0' na string 'Nome_Cidade2 e não "poluir" a impressão em tela.*/
    printf("Digite o número total de habitantes da cidade. Pressione ENTER para confirmar.\n");
    scanf("%d", &Populacao2);
    printf("Digite a área total da cidade, em km2. Pressione ENTER para confirmar.\n");
    scanf("%f", &AreaCidade2);
    printf("Digite o PIB da cidade, em milhões de Reais. Pressione ENTER para confirmar.\n");
    scanf("%f", &PIBCidade2);
    printf("Digite o número de pontos turísticos da cidade. Pressione ENTER para confirmar.\n");
    scanf("%d", &Pts_Turisticos2);
    
    printf("\n\tCARTA1\n\n");
    printf("\tEstado: %c\n", Estado1);
    printf("\tCódigo: %s\n", Cdg_Carta1);
    printf("\tNome da Cidade: %s\n", Nome_Cidade1);
    printf("\tPopulação: %d\n", Populacao1);
    printf("\tÁrea: %.3f km2\n", AreaCidade1);
    printf("\tPIB: %.3f milhões de Reais\n", PIBCidade1);
    printf("\tNúmero de Pontos Turísticos: %d\n\n", Pts_Turisticos1);
    
    printf("\tCARTA2\n\n");
    printf("\tEstado: %c\n", Estado2);
    printf("\tCódigo: %s\n", Cdg_Carta2);
    printf("\tNome da Cidade: %s\n", Nome_Cidade2);
    printf("\tPopulação: %d\n", Populacao2);
    printf("\tÁrea: %.3f km2\n", AreaCidade2);
    printf("\tPIB: %.3f milhões de Reais\n", PIBCidade2);
    printf("\tNúmero de Pontos Turísticos: %d\n", Pts_Turisticos2);
    
    return 0;
}
