#include <stdio.h>
#include <stdlib.h>

int min(int a, int b);
int max(int a, int b);

int main(void) {
    int a = 5;
    int b = 10;

    printf("Min of 5 and 10: %d, Max of 5 and 10: %d\n", min(a, b), max(a, b));
    
    return EXIT_SUCCESS;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}