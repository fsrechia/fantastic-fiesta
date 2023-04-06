#include <stdio.h>

int main() {
    for (int i = 1; i  <= 100; i++) {
        if (i % 15 == 0) { // multiples of 3 and 5 are also multiples of 15
            printf("FooBar\n");
        }
        else if (i % 3 == 0) {
            printf("Foo\n");
        }
        else if (i % 5 == 0) {
            printf("Bar\n");
        }
        else {
            printf("%d\n", i);
        }
    }
    return 0;
}