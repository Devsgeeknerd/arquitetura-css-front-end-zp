// Inclui a biblioteca padrão de entrada e saída.
#include <stdio.h>
// Inclui a biblioteca padrão para funções utilitárias.
#include <stdlib.h> 

// Função principal do programa.
void main()
{
    // Declara uma variável para armazenar a nota da primeira avaliação.
    float nota1; 
    // Declara uma variável para armazenar a nota da segunda avaliação.  
    float nota2; 
    // Declara uma variável para armazenar a média das notas.  
    float media;   

    // Solicita ao usuário que digite a nota da primeira avaliação.
    printf("Digite a nota da primeira avaliação: ");
    // Lê a nota da primeira avaliação e armazena na variável 'nota1'.
    scanf("%f", &nota1); 

    // Solicita ao usuário que digite a nota da segunda avaliação.
    printf("Digite a nota da segunda avaliação: ");
    // Lê a nota da segunda avaliação e armazena na variável 'nota2'.
    scanf("%f", &nota2); 

    // Calcula a média das duas notas.
    media = (nota1 + nota2) / 2;

    // Exibe a média final com duas casas decimais.
    printf("A media final e: %0.2f\n", media);

    // Verifica se a média é maior ou igual a 6 para determinar a aprovação.
    if (media >= 6)
    {
        // Se a média for maior ou igual a 6, informa que o aluno foi aprovado.
        printf("Aluno aprovado");
    }
    else
    {
        // Caso contrário, informa que o aluno foi reprovado.
        printf("Aluno reprovado");
    }
    // Retorna "0" para indicar que o programa terminou com sucesso.
    return 0; 
}
