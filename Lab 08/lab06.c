#include <stdio.h>

struct complex {
    float a, b;
};

struct complex add_complex(struct complex C, struct complex D)
{
    struct complex addcomp;
    addcomp.a = C.a + D.a;
    addcomp.b = C.b + D.b;
    return addcomp;
}

struct complex multiply_complex(struct complex C, struct complex D)
{
    struct complex mulcomp;
    mulcomp.a = ((C.a * D.a) - (C.b * D.b));
    mulcomp.b = ((C.a * D.b) + (C.b * D.a));
    return mulcomp; 
}

void print_complex(const char str[], struct complex x)
{
    printf("%s", str);
    if (!x.a) {
        if (!x.b) {
            printf("%.1f\n", 0.0);
        }
        else {
            printf("%.1fi\n", x.b);
        }
    }   
    else if (!x.b) {
        printf("%.1f\n", x.a);
    } 
    else {
        if (x.b < 0)
            printf("%.1f - %.1fi\n",x.a, -x.b);
        else
            printf("%.1f + %.1fi\n",x.a, x.b);
    }
    //thank you this if else from tdet_tent_007_2547
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
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}