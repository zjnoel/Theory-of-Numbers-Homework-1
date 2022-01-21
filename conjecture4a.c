#include <stdio.h>
#include <stdlib.h>
#include "GCD.h"

int main(int argc, char* argv[])
{
    // This program checks the following conjecture:
    // "If n is a composite and n | a or n | b, then n | ab"
    // Provide a composite number. We generate a number a such that n | a, and then iterate through b to see if n | ab.
    int n = atoi(argv[1]);
    printf("%d\n", n);
    for(int a = 1; a <  512; a++){
        if( a % n == 0){
            // n | p. We now need to generate our b values and see if we can find a contradiction.
            for(int b = 1; b < 512; b++){
                int ab = a * b;
                if ( ab % n != 0){
                printf("CONTRADICTION: When a = %d, b = %d, n = %d | ab is false.\n", a, b, n);
                exit(-1);                    
                }
            }
        }
        return 0;
    }
}