#include <stdio.h>
#include <stdlib.h>

int increment(int x);
int negate(int x);

int main(void) {
    int inputs[] = {10, 0, -10};
    int length = sizeof(inputs) / sizeof(inputs[0]);

    for (int i = 0; i < length; i++) {
        int x = inputs[i];
        printf("increment(%d) = %d\n", x, increment(x));
        printf("negate(%d) = %d\n\n", x, negate(x));
    }

    return EXIT_SUCCESS;
}
