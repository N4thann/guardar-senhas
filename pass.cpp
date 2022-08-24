#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char assunto[50];
    char login[50];
    char senha[50];
}Conta;
typedef struct{
    char nome[50];
    char assunto[50];
    char login[50];
    char senha[50];
}Conta2;

int main(){
    int op, resp;
    FILE *arq;
    Conta a;
    Conta2 b;

    do{
       printf("\nDIGITE A SENHA:   \n");
       scanf("%d", &resp);
       if(resp != 0000)
            printf("\n SENHA INCORRETA - TENTE NOVAMENTE \n");
    }while(resp != 0000);
    system("cls");

        do{
           printf("\t DIGITE (1) PARA VISUALIZAR SENHAS DE JOGOS: \n");
           printf("\t DIGITE (2) PARA VISUALIZAR OUTRAS SENHAS: \n");
           printf("\t DIGITE (3) PARA COLOCAR UMA NOVA SENHA: \n");
           printf("\t DIGITE (0) PARA ENCERRAR O PROGRAMA: \n");
           scanf("%d", &op);
            switch(op){
                    system("cls");
                    case 1:
                      arq = fopen("221132154243.bin", "rb");
                      while(fread(&a, sizeof(Conta), 1, arq)){
                            printf("------------------------------------------------------------\n");
                            printf("Assunto : %s \nLogin : %s\nSenha: %s\n", a.assunto, a.login, a.senha);
                      }
                      printf("\n");
                      if(!arq)
                        printf("Erro ao tentar ler o arquivo\n");
                      fclose(arq);
                      break;
                    case 2:
                        do{
                            printf("\t DIGITE (1) PARA LER A SENHA DE NATHAN: \n");
                            printf("\t DIGITE (2) PARA VER DE OUTRAS PESSOAS: \n");
                            scanf("%d", &resp);
                        }while((resp != 1) && (resp != 2));
                        system("cls");
                        if(resp == 1){
                           arq = fopen("2545114343.bin", "rb");
                           while(fread(&a, sizeof(Conta), 1, arq)){
                                printf("------------------------------------------------------------\n");
                                printf("Assunto : %s \nLogin : %s\nSenha: %s\n", a.assunto, a.login, a.senha);
                            }
                            if(!arq)
                            printf("Erro ao tentar ler o arquivo\n");
                            fclose(arq);
                        };
                        if(resp == 2){
                           arq = fopen("4423155435114343.bin", "rb");
                           while(fread(&b, sizeof(Conta2), 1, arq)){
                                printf("------------------------------------------------------------\n");
                                printf("Nome : %s\nAssunto : %s \nLogin : %s\nSenha: %s\n", b.nome, b.assunto, b.login, b.senha);
                            }
                            if(!arq)
                            printf("Erro ao tentar ler o arquivo\n");
                            fclose(arq);
                        };
                        break;
                    case 3:
                        do{
                            printf("\t DIGITE (1) PARA COLOCAR UMA NOVA SENHA DE JOGO: \n");
                            printf("\t DIGITE (2) PARA COLOCAR UM OUTRO TIPO DE SENHA: \n");
                            scanf("%d", &resp);
                        }while((resp != 1) && (resp != 2));
                        if(resp == 1){
                           arq = fopen("221132154243.bin", "ab");
                           //ASSUNTO DA CONTA
                           printf("\t DIGITE DO QUE SE TRATA A SENHA: ");
                           scanf(" %[^\n]s", a.assunto);
                           //LOGIN DA CONTA
                           printf("\t DIGITE O LOGIN: ");
                           scanf(" %[^\n]s", a.login);
                           //SENHA DA CONTA
                           printf("\t DIGITE A SENHA: ");
                           scanf(" %[^\n]s", a.senha);
                           fwrite(&a, sizeof(Conta), 1, arq);
                           fclose(arq);
                           printf("\n CONTA GRAVADA COM SUCESSO \n");
                        };
                        if(resp == 2){
                            do{
                                printf("\t DIGITE (1) PARA COLOCAR UMA SENHA DE NATHAN: \n");
                                printf("\t DIGITE (2) PARA COLOCAR UMA SENHA DE UMA OUTRA PESSOA: \n");
                                scanf("%d", &resp);
                            }while((resp != 1) && (resp != 2));
                           system("cls");
                           if(resp == 1){
                            arq = fopen("2545114343.bin", "ab");
                            //ASSUNTO DA CONTA
                            printf("\t DIGITE DO QUE SE TRATA A SENHA: ");
                            scanf(" %[^\n]s", a.assunto);
                            //LOGIN DA CONTA
                            printf("\t DIGITE O LOGIN: ");
                            scanf(" %[^\n]s", a.login);
                            //SENHA DA CONTA
                            printf("\t DIGITE A SENHA: ");
                            scanf(" %[^\n]s", a.senha);
                            fwrite(&a, sizeof(Conta), 1, arq);
                            fclose(arq);
                            system("cls");
                            printf("\n CONTA GRAVADA COM SUCESSO \n");
                           };
                           if(resp == 2){
                            arq = fopen("4423155435114343.bin", "ab");
                            //NOME DA PESSOA
                            printf("\t DIGITE O NOME DA PESSOA: ");
                            scanf(" %[^\n]s", b.nome);
                            //ASSUNTO DA CONTA
                            printf("\t DIGITE DO QUE SE TRATA A SENHA: ");
                            scanf(" %[^\n]s", b.assunto);
                            //LOGIN DA CONTA
                            printf("\t DIGITE O LOGIN: ");
                            scanf(" %[^\n]s", b.login);
                            //SENHA DA CONTA
                            printf("\t DIGITE A SENHA: ");
                            scanf(" %[^\n]s", b.senha);
                            fwrite(&b, sizeof(Conta2), 1, arq);
                            fclose(arq);
                            system("cls");
                            printf("\n CONTA GRAVADA COM SUCESSO \n");
                           };
                        };
                        break;
            }
        }while(op != 0);
    return 0;
}
