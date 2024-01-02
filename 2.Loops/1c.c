#include <stdio.h>

int main(){
    for (int i = 18;i <= 63; i += 9){
        if (i == 63){
            printf("-%d", i);
        }
        else{
            if (i%2 == 0){
               printf("%d, ", i); 
            }
            else{
               printf("-%d, ", i);  
            }
        }
    }
}