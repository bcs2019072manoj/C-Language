#include <stdio.h>

void printPattern(int N) {
    int value = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", value++);
            if (value > N) {
                value = 1;
            }
        }
        printf("\n");
    }
}

int main() {
    int N = 5; // Set the value of N
    printPattern(N);

    return 0;
}