#include <stdio.h>

int main () {
    int a, b, c, menor, maior;
    
    printf("digite 3 números: ");
    scanf("%d %d %d" , &a , &b , &c);
    
   
    maior = a;
    menor = a;
    
    if (menor > b)
    menor = b;
    if(menor > c)
    menor = c;
    
    if(maior < b)
    maior = b;
    if(maior < c)
    maior = b;
    
    
    printf("\tMenor: %d\tMaior: %d\n", menor, maior);
    
}