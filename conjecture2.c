#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    // This program checks the following conjecture:
    // "If p is a prime number and p | a or p | b, then p | ab"
    // Provide a prime number. We generate a number a such that p | a, and then iterate through b to see if p | ab.
    int p = atoi(argv[1]);
    printf("%d\n", p);
    for(int a = p * 2; a <  4096; a = a * 2){
        // Check to make sure p | a
        if( a % p != 0){
            printf("ERROR: We screwed up somewhere in our loop statement.\n");
            return -1;
        }
        // p | a. We now need to generate our b values and see if we can find a contradiction.
        for(int b = 1; b < 150; b++){
            int ab = a * b;
            if(ab % p != 0){
                printf("CONTRADICTION: When a = %d, b = %d, p = %d | ab is false.\n", a, b, p);
                exit(-1);
            }
        }
    }
    return 0;
}