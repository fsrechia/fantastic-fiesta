#include <stdio.h>

int main() {
    for (int i = 1; i  <= 100; i++) {
        if (i % 3 == 0) {
            printf("Foo");
        }
        if (i % 5 == 0) {
            printf("Bar");
        }
        if (i % 5 != 0 && i % 3 != 0) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}