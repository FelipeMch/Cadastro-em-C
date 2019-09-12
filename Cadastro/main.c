#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//ínicio do struct
struct Pessoa
{
    char nome[60];
    int cidade[60];
    int idade;
    int idadePai;
    int idadeMae;
    int filhos;
    float renda;
    enum Sexo {Masculino, Feminino};
};
//Fim do struct

int main()
{
  int escolha;

  setlocale(LC_ALL, "Portuguese");

  //While do menu
  printf("Nenhuma opção escolhida");

  while(1)
  {
    printf("\n----------------------- ");
    printf("\n1 - Entrevistar uma pessoa ");
    printf("\n2 - Mostrar os resultados ");
    printf("\n3 - Sair ");
    printf("\n----------------------- ");
    printf("\nEscolha uma opção: ");
    scanf("%d",&escolha);
    fflush(stdin);
    system("cls");

    switch (escolha)
    {
      case 1:
        printf("Entrevista: ");
          struct Pessoa pessoas[3];

    for(int i = 0; i < sizeof(pessoas)/sizeof(pessoas[0]); i++)
    {
        printf("Pessoa %d:\n", i);
        printf("Nome: ");
        scanf("%c", &pessoas[i].nome);
        fflush(stdin);
        printf("Sexo:\n ");

        //Ínicio do enum sexo
         enum Sexo sexo;

    printf("0 - Masculino\n 1 - Feminino\n");
    scanf("%d", &sexo);

    switch(sexo)
    {
        case Masculino:    puts("Masculino");    break;
        case Feminino:     puts("Feminino");     break;
        default:           puts("Desconhecido");
    }
    //Fim do enum

    //Informações

        printf("Idade:\n ");
        scanf("%d", &pessoas[i].idade);
        fflush(stdin);
        printf("Cidade:\n ");
        scanf("%c", &pessoas[i].cidade);
        fflush(stdin);
        printf("Idade do pai:\n ");
        scanf("%d", &pessoas[i].idadePai);
        fflush(stdin);
        printf("Idade da mãe:\n ");
        scanf("&d", &pessoas[i].idadeMae);
        fflush(stdin);
        printf("Filhos:\n ");
        scanf("%d", &pessoas[i].filhos);
        fflush(stdin);
        printf("Renda:\n ");
        scanf("%f", &pessoas[i].renda);
        fflush(stdin);
        break;

      case 2:
        printf("Resultados: ");
        break;
      case 3:
        printf("Sair: ");
        exit(0);
        break;

        return 0;
      default:
        printf("Opção inválida");
    }
  }
}

}
