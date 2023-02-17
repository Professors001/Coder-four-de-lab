#include <stdio.h>
#include <math.h>

struct Point {
    double X, Y;
};

int main() {
    int n; printf("Number of Points: "); scanf("%d", &n);
    struct Point points[n];
    for(int i = 0;i < n; i++) {
        printf("P%d.X: ", i+1); scanf("%lf", &points[i].X);
        printf("P%d.Y: ", i+1); scanf("%lf", &points[i].Y);
    }
    
    printf("Length:\n");
    for(int i = 1;i < n; i++) {
        double dX, dY, length;
        dX = points[i-1].X - points[i].X;
        dY = points[i-1].Y - points[i].Y;
        length = sqrt(pow(dX, 2) + pow(dY, 2));
        printf("Length from P%d(%.2lf, %.2lf) ", i, points[i-1].X, points[i-1].Y);
        printf("to P%d(%.2lf, %.2lf) is %.2lf\n", i+1, points[i].X, points[i].Y, length);
    }

    return 0;
}