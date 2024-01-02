#include <stdio.h>

int main() {
    int n,sum = 0;

    printf("Enter: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        if (i%7 == 0){
            sum += i;
        }

    }
    printf("%d", sum);
    return 0;
}