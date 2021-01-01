#include <stdio.h>
#include <stdlib.h>

enum DAYS_OF_WEEK {sun=1, mon=2, tue=4, wed=8, thu=16, fri=32, sat=64};

int main(void) {
    printf(
        "Sun: %d, Mon: %d, Tue: %d, Wed: %d, Thu: %d, Fri: %d, Sat: %d\n", 
        sun, mon, tue, wed, thu, fri, sat);
    return EXIT_SUCCESS;
}