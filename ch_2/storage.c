#include <stdio.h>
#include <stdlib.h>

void increment(int *ptr_val);
int retrieve(void);

int main(void) {

    int counter = 0;

    for (int i=0; i < 5; i++) {
        counter = retrieve();
    }
    printf("\nFinal Counter: %d\n", counter);
    return EXIT_SUCCESS;
}

void increment(int *ptr_val) {
    static unsigned int counter = 0;

    counter++;
    *ptr_val = counter;
}

int retrieve(void) {
    int p = 0;
    increment(&p);

    return p;
}
