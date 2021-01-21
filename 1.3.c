// 1.3. Write a program to input a floating number and show that number in width of 10 with two decimal point and zero fill
#include <stdio.h>
int main(){
    float n;
    scanf("%f",&n);
    printf("%0.20f",n);


return 0;
}