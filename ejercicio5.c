#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
  float radio, area, circuferencia, diametro;
  int opcion;

  printf("Como vas a calcular el radio del circulo?\n\n1: Circunferencia\n2: Diametro\n\nEscriba su opcion: ");
  scanf("%d", &opcion);

  if(opcion == 1){
    printf("\n\nDame la circuferencia: ");
    scanf("%f", &circuferencia);

    radio = circuferencia / (2 * PI);

    area = PI * pow(radio, 2); 

    printf("La circuferencia es: %0.2f\nEl radio es: %0.2f\nEl area es: %0.2f", circuferencia, radio, area);
    
  }
  else if (opcion == 2)
  {
    printf("\n\nDame el diametro: ");
    scanf("%f", &diametro);
    
    radio = diametro / 2;
    
    area = PI * pow(radio, 2); 

    printf("El diametro es: %0.2f\nEl radio es: %0.2f\nEl area es: %0.2f", diametro, radio, area);
  }
  else{
    printf("\n\nLas opciones disponibles es el 1 y el 2\nLa opcion %d no esta disponible.", opcion);
  }

  
  
  return 0;
}