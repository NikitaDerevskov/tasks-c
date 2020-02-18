#include <stdio.h>

int pyramid() {
    int number;

    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    printf("Hello my friend, this is just practise file");
    return 0;
}
