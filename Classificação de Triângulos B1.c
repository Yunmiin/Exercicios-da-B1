#include <stdio.h>

int main () {
    int a, b, c;
    
    printf("Digite três valores: ");
    scanf("%d%d%d", &a, &b, &c);
    
    if (a + b > c && a + c > b && b + c > a) {
        printf("Os três lados formam um triângulo\n");
        
        if(a == b && a == c)
        printf("Este é um triângulo equilátero\n");
        else
        
        if(a == b ||  a == c ||  b == c)
        printf("Este é um triângulo isósceles\n");
        
        else 
        printf("Este é um triângulo escaleno\n");
    }
    else 
    printf("Os três lados não formam um triângulo\n");
}