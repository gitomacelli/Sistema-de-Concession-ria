#include <stdio.h>
#include <locale.h>

const int SENHA_CORRETA = 123; // Declara uma vari�vel constante inteira

void cadastrar_Cliente(){
    char nome[100], telefone[20], endereco[200];

    printf("------ CADASTRO ------\n");
    printf("Digite seu NOME COMPLETO: \n");
    fflush(stdin);
    gets(nome);

    printf("Digite seu telefone: \n");
    fflush(stdin);
    gets(telefone);

    printf("Digite seu endere�o: \n");
    fflush(stdin);
    gets(endereco);

    system("cls");

    printf("--- Dados Cadastrados ---\n");
    printf("Nome Completo: %s\n", nome);
    printf("Telefone: %s\n", telefone);
    printf("Endereco: %s\n", endereco);
}
void comprar_Carro(){
    int opcao_Carro;
    char cor[30], pagamento[30];
	
    do {
    	system("cls");
        printf("------ COMPRA DE CARRO ------\n"
                "1 - Ford Ka\n"
                "2 - Civic\n"
                "3 - Fusca\n"
                "Digite a op��o de carro escolhida: \n");
            scanf("%d", &opcao_Carro);

            if (opcao_Carro < 1 || opcao_Carro > 3) {
            	system("cls");
                printf("OP��O INV�LIDA! Escolha novamente.\n");
                system("pause");
            }
    } while (opcao_Carro < 1 || opcao_Carro > 3);


    printf("Digite a COR desejada: \n");
    fflush(stdin);
    gets(cor);

    printf("Digite a FORMA DE PAGAMENTO: \n");
    fflush(stdin);
    gets(pagamento);

    system("cls");

    printf("--- Dados Cadastrados ---\n");
    if (opcao_Carro == 1) { 
        printf("Modelo escolhido: Ford Ka\n"); 
    } else if (opcao_Carro == 2) {
        printf("Modelo escolhido: Civic\n"); 
    } else if (opcao_Carro == 3) { 
        printf("Modelo escolhido: Fusca\n"); 
    } else { 
        printf("Op��o invalida\n");
        return;
    }
    printf("Cor escolhida: %s\n", cor);
    printf("Forma de pagamento: %s\n", pagamento);
}
void comprar_Acessorio() {
    char acessorio[50];
    int quantidade;
    
    printf("------ ACESS�RIOS ------\n");
    printf("Digite o ACESSORIO desejado: \n");
    fflush(stdin);
    gets(acessorio);

    printf("Digite a QUANTIDADE: \n");
    scanf("%d", &quantidade);

    system("cls");

    printf("--- Dados Cadastrados ---\n");
    printf("Acessorio escolhido: %s\n", acessorio);
    printf("Quantidade escolhida: %d\n", quantidade);
}

int main(){
	setlocale(LC_ALL, "Portuguese");

    int senha;
    int opcao;

	//VALIDA��O DE SENHA 

    do{
    	printf("Insira sua senha: \n");
    	scanf("%d", &senha);
    
        if (senha == SENHA_CORRETA){
            printf("SENHA CORRETA!\n");
            system("pause");
        }else{
            printf("ERRO DE SENHA!\n");
        }
    } while (senha != SENHA_CORRETA);
    
    do{
        system("cls");
        printf("------ MENU CONCESSION�RIA: ------\n"
               "1 - Cadastro cliente\n"
               "2 - Compra de carro\n"
               "3 - Compra de acess�rio\n"
               "4 � SAIR DO PROGRAMA\n"
               "Digite a op��o escolhida: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1 :
            system("cls");
            cadastrar_Cliente();
            system("pause");
            break;
        
        case 2 :
            system("cls");
            comprar_Carro();
            system("pause");
            break;

        case 3 :
            system("cls");
            comprar_Acessorio();
            system("pause");
            break;

        case 4 :
            system("cls");
            printf("PROGRAMA FINALIZADO!\n");
            system("pause");
            break;

        default:
            printf("OP��O INV�LIDA!\n");
            system("pause");
            break;
        }

    }while (opcao != 4);


    return 0;
}
