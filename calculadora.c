#include <stdio.h> 
#include <stdlib.h>

void soma()
{ 
    float valor1, valor2, result;
    printf("\nprimeiro numero: "); 
    scanf("%f", &valor1);
    printf("segundo numero: "); 
    scanf("%f", &valor2);
    result = valor1 + valor2; 
    printf("\nResultado da soma: %.2f\n ", result); 
    system ("pause"); 
    system("cls"); 
    menu(); 
}

void subtrai()
{
    //todo
    float valor1, valor2, result;
    printf("\nprimeiro numero: "); 
    scanf("%f", &valor1);
    printf("segundo numero: "); 
    scanf("%f", &valor2);
    result = valor1 - valor2; 
    printf("\nResultado da subtraçao: %.2f\n ", result); 
    system ("pause"); 
    system("cls"); 
    menu(); 
}

void divide()
{ 
    //todo
    float valor1, valor2, result;
    printf("\nprimeiro numero: "); 
    scanf("%f", &valor1);
    printf("segundo numero: "); 
    scanf("%f", &valor2);
    result = valor1 / valor2; 
    printf("\nResultado da Divisao\n: %.2f\n ", result); 
    system ("pause"); 
    system("cls"); 
    menu();
}

void multiplica()
{ 
    //todo
    float valor1, valor2, result;
    printf("\nprimeiro numero: "); 
    scanf("%f", &valor1);
    printf("segundo numero: "); 
    scanf("%f", &valor2);
    result = valor1 * valor2; 
    printf("\nResultado da Multilplicacao\n: %.2f\n ", result); 
    system ("pause"); 
    system("cls"); 
    menu();
}

void menu()
{ 
    int escolha;

    printf("\t\tBem vindo a calculadora em C\n\n");

    printf("Selecione uma operacao matematica:\n");
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Sair\n");
    printf("Operacao: ");
    scanf ("%d", &escolha);

    switch (escolha)
    {
        case 1: 
            soma(); 
        break; 

        case 2:
            subtrai();
        break;

        case 3:
            divide();
        break;

        case 4:
            multiplica();
            break;

        case 5:
            system("exit");
            printf("\nFim...\n\n");
        break;

        default: 
            printf("\nComando invalido, tente novamente!\n\n");
            system ("pause");
            system ("cls");
            menu(); 
            break;
    }
}


int main() 
{
    menu();
    system("pause");
    return 0;
}