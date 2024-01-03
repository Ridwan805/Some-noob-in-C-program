#include <stdio.h>

int main(){
    int x;

    printf("Enter ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++){
        if (x%i == 0){
          if (i == x){
            printf("%d", i);
          }
          else{
            printf("%d, ",i);
          }
        }  
    }
    return 0;
}