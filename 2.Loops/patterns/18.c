#include <stdio.h>

int main() {
    int n,m;
    
    printf("Enter row: ");
    scanf("%d", &m);

    printf("Enter colums: ");
    scanf("%d", &n);


    for (int i = 0; i < m; i++){
        for (int j = 1; j <= n; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}