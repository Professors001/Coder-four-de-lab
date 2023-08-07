#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  char size,pep,che,mus;
  float s,ec = 0.0,bc = 2.0,fc = 5.0,area,cost,price;

  printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\nEnter pizza size (1=s, 2=m, or 3=l): ");
  size = getchar();
  getchar();
  printf("Extra pepperoni? (1=yes, 0=no): ");
  pep = getchar();
  getchar();
  printf("Extra cheese? (1=yes, 0=no): ");
  che = getchar();
  getchar();
  printf("Extra mushroom? (1=yes, 0=no): ");
  mus = getchar();
  getchar();
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

  if (size == '1') {
    s = 10,0;
  }
  else if (size == '2') {
    s = 16,0;
  }
  else if (size == '3') {
    s = 20,0;
  }

  area =(M_PI * pow(s,2)) / 4;

  if (pep == '1') {
    ec += 0.50;
  }
  if (che == '1') {
    ec += 0.25;
  }
  if (mus == '1') {
    ec += 0.30;
  }
  cost = fc + (bc * area) + (ec * area);
  price = cost * 1.5;
  printf("Your order costs %.2f baht.\nThank you.",price);
  return 0;
}