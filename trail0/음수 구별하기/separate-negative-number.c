#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("%d", N);
    if (N < 0) {
        printf("\nminus");
    }
    return 0;
}