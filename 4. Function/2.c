#include <stdio.h>

void fibonacci(int n){
    int f = 0;
    int s = 1;
    printf("%d ",f);
    printf("%d ",s);
    int l = f+s;
    for (int i = 0; i <= n; i++){
        if (l <= n){
            printf("%d ",l);
            f = s;
            s = l;
            l = f+s;
        }
    }
}

int main(){
    int x;
    printf("Enter: ");
    scanf("%d", &x);
    fibonacci(x);

    return 0;
}