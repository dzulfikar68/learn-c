#include <stdio.h>

/* assignment nilai integer dan print */
int main() {
    float f;
    long double fll;
    f = 20.0f;
    fll = 10.0L;
    printf("float: %f, long double: %Lf \n", f, fll);
    return 0;
}