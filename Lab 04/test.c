#include <stdio.h>

int x = 10;
int addTen(int x, int y){
    x += 10;
    printf("in addTen x = %d, y= %d\n",x,y);
    return x;
}

void addTwenty(int x); //declare f(X)

int fac(int n){
    if (n == 1){
        return 1;
    }
    return n*fac(n-1);
}
int fibo(int n){
    if (n == 1 || n==2){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int x = 20;
    printf("%d\n", x);
    int y = addTen(x,50);
    printf("in main x = %d, y = %d\n",x,y);
}
 void addTweenty(int x){ // can be code after main if declear first
    printf("%d\n", x+20);
}

// 7 => 0111
// 7 % 2
// 7 >> 1 = 011
// 7 >> 2 = 01

// 1 * 10^0
// 1 * 10^1
// 1 * 10^2
// 0 * 10^3