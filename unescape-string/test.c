#include <stdio.h>

int main() {
    int a[10];

    for (int i = 0; i < 10; i++) {
        a[i] = i;
    }

    int idx = 0;
    int n;
    while (idx < 10) {
        n = a[idx++];
        printf("%d ", n);
    }
    printf("\n");

    return 0;
}
