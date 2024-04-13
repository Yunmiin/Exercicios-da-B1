#include <stdio.h>

float temperatura (float C) {
    float F;
    F = C * (9.0 / 5.0) + 32.0;
    
    return F;
}


int main () {
    float f, c;
    printf ("Digite a temperatura em Celsius: ");
    scanf ("%f", &c);
    
    f = temperatura (c);
    
    printf("Resultado: %f\n", f);
    return 0;
}
