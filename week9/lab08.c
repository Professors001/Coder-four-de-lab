#include <stdio.h>
#include <string.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char *filename) {
    FILE *f_PTR = fopen(filename, "r");

    char txt[64], name[31];
    int size_array, i, amount, n = 0, key;
    double price;
    fgets(txt, 64, f_PTR);
    sscanf(txt, "%d", &size_array);
    Product stock[size_array];
    while(fgets(txt, 64, f_PTR)) {
        memset(name, 0, sizeof(name));
        sscanf(txt, "%[^,],%[^,],%30[^,],%d,%lf", name, name, name, &amount, &price);
        key = 0;
        for(i = 0; i < n; i++) {
            if(!(strcmp(name, stock[i].name))) {
                stock[i].amount += amount;
                stock[i].totalCost += price;
                key = 1;
                break;
            }
        }
        if(!key) {
            strcpy(stock[i].name, name);
            stock[i].amount = amount;
            stock[i].totalCost = price;
            n++;
        }
    }
    printStock(stock, size_array);
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}