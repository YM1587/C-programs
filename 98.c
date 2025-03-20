#include <stdio.h>

void print_to_98(int n) {
    if (n <= 98) {
        for (; n <= 98; n++) {
            if (n == 98)
                printf("%d\n", n);
            else
                printf("%d, ", n);
        }
    } else {
        for (; n >= 98; n--) {
            if (n == 98)
                printf("%d\n", n);
            else
                printf("%d, ", n);
        }
    }
}

int main() {
    int start = 0; // Example starting number
    print_to_98(start);
    return 0;
}
