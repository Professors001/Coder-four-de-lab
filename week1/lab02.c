#include <stdio.h>
#include <stdlib.h>

#define PI 22.0/7

int main() {
    float radius = 1.5;
    float vos,fn;
    fn = 4.0 / 3.0;
    vos = fn * PI * (radius*radius*radius);
    printf("The volume of this sphere is %.2f",vos);
}