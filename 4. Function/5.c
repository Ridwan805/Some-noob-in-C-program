#include <stdio.h>
#include <string.h>

float calculate_tax(int age, int salary, char* deg){
    float tax = 0;
    if (age < 18 || deg == "President" || salary < 10000){
        return 0;
    }
    else{
        if (10000<=salary && salary <= 20000){
            tax = (5 * salary)/100;
        }
        else{
            tax = (10 * salary)/100;
        }
        return tax;
    }
}


int main(){
    int age , sal;
    char de[1000];

    printf("Age:");
    scanf("%d", &age);
    printf("Salary:");
    scanf("%d", &sal);
    printf("Designation:");
    scanf(" %[^\n]", de);  
    float tax = calculate_tax(age,sal,strupr(de));
    printf("%0.2f", tax);

}