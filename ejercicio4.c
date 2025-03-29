#include <stdio.h>

int main()
{

  char nombre[20], numero_telefono[20]; 
  int  minutos, costo;
  
 
  printf("Ingrese nombre: ");
  scanf("%s", &nombre);

  printf("Numero telefono: ");
  scanf("%s", &numero_telefono);
  printf("Minutos: ");
  scanf("%d", &minutos);


  costo = minutos * 8;

  printf("\n\nNombre: %s\nNumero telefono: %s \nMinutos: %d\nCosto de llamada: %dBs.", nombre, numero_telefono, minutos, costo); 

  return 0;  
}

