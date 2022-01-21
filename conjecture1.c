#include <stdio.h>
#include <stdlib.h>
#include "GCD.h"

int main(int argc, char* argv[])
{
    // Finds a contradiction that disproves the following:
    // If gcd(m,n) = d, then gcd(a, m*n) * gcd(a, n)/d
    for(int m = 31; m < 2048; m++){
        for(int n = 1024; n < 2048; n++){
            int d = findGCD(m , n);
            int a = 2;
            int gcd1 = findGCD(a, m*n);
            double gcd2 = (findGCD(a, m) * (findGCD(a, n) * 1.0) / d);
            if(gcd1 != gcd2 && gcd2 != -1){
                printf("CONTRADICTION FOUND: m = %d, n = %d, a = %d\n", m, n, a);
                printf("gcd1: %d, gcd2: %d / %d\n", gcd1, findGCD(a, n), d);
                printf("d = %d\n", d);
                exit(0);
            }
        }
    }
    return 0;
}
