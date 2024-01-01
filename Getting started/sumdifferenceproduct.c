#include <stdio.h>

int main() {
    int x,y,z,a,b;
  
    printf("ENter the first number:");
    scanf("%d", &x);

    printf("ENter the second number:");
    scanf("%d", &y);
    
    z = x + y;
    printf("sum = %d\n",z);
    
    a = x * y;
    printf("product= %d\n",a);

    b = x - y;
    printf("difference= %d\n",b);

    return 0;
}
