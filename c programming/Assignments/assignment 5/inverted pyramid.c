#include <stdio.h>

void main() {
    int n = 5;
    int i, j, s;

    for(i = n; i >= 1; i--) {
        for(s= n; s > i; s--) {
            printf(" ");
        }

        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

}
