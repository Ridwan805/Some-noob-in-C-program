#include <stdio.h>

int main(){

    for (int i = -10; i <= 20; i += 5){
        if (i == 20){
            printf("%d", i);
        }
        else{
           printf("%d, ", i);  
        }
    }
}