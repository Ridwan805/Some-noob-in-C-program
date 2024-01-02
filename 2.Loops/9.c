#include <stdio.h>

int main() {
    int n,sum = 0;

    for (int i = 1; i <= 5; i++){
    printf("Enter: ");
    scanf("%d", &n);
    sum += n;
    printf("%d\n", sum);
    }
}