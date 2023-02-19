//file
// 4
// 20170401,12:54:00,T Shirt L,1,120.00
// 20170401,12:56:32,Boxer,2,90.00
// 20170401,13:12:34,T Shirt L,2,200.00
// 20170401,13:12:34,Boxer,2,98.00
// 20170401,14:29:17,T Shirt M,4,480.00
// 20170401,16:39:27,Shorts M,1,120.50
// 20170401,17:12:34,T Shirt L,3,350.00



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

    int size_array, i, amount, date, n = 0;
    char txt[500], trash1[9], trash2[9], name[51];
    double p;
    fscanf(f_PTR, "%d", &size_array);
    Product Sell[size_array];
    fgets(txt, 500, f_PTR); //read 1st line before
    while(!feof(f_PTR)) {
        fgets(txt, 500, f_PTR);
        sscanf(txt, "%8s,%8s,%30[^,],%d,%lf", trash1, trash2, name, &amount, &p);
        printf("%s %d %lf\n", name, amount, p);
        for(i = 0; i < size_array; i++) {
            if(!(strcmp(name, Sell[i].name))) {
                Sell[i].amount += amount;
                Sell[i].totalCost += p;
                break;
            }
            strcpy(Sell[n].name, name);
            Sell[n].amount = amount;
            Sell[n].totalCost = p; //FUCK YOU BITCH
            n++;
        }
    }
    printStock(Sell, size_array);
}


int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}