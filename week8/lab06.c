#include <stdio.h>

struct complex {
    float a, b;
};

struct complex add_complex(struct complex C, struct complex D)
{
    struct complex addcom;
    addcom.a = C.a + C.b;
    addcom.a = C.a + C.b;
    return addcom;
}

float multiply_complex()
{

}

void print_complex()
{

}

int main()
{
    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.a, &C.b);
    printf("Enter D: ");
    scanf("%f %f", &D.a, &D.b);
    
    add_complex(C, D);
    E = add_complex(C, D);
    // F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}