/******************************************************************************
9. Crie um programa que peça ao usuário para adivinhar um número (por exemplo, 42) e continue
pedindo até que o usuário acerte o número.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0;
    
    printf("Tente a sorte! Qual é o número secreto?\nPrimeira tentativa: ");
    scanf("%d", &n);
    
    while(n!=42)
    {
        printf("Que pena, você errou. Tente novamente: ");
        scanf("%d", &n);
    }
    if(n==42)
        printf("Que sorte! Você acertou!");

    return 0;
}
