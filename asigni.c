#include <stdio.h>
#include <limits.h>

int main() {
    int i;
    long int ii;
    printf("hello\n");
    i = 1234;
    ii = 123456;
    printf("Ini nilai i=1234 = %d \n", i);
    printf("Ini nilai ii=123456 : %10ld \n", ii);
    printf("Min dan Max integer : %d %d \n", INT_MIN, INT_MAX);
    printf("Max long integer : %ld, %ld \n", LONG_MIN, LONG_MAX);
    return 0;
}