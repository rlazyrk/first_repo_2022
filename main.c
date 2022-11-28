#include <stdio.h>
#include <math.h>
int main() {
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);
    double resultat = pow(x,(y + z)) + sqrt(x + pow(z,y)) - 161 * tan(x*z);
    printf("x - %f y - %f z - %f \nresultat = %f", x, y, z, resultat);
    return 0;
}

