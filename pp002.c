// pp002: Write a program to input a number and check it to be even or odd using switch statement.
#include <stdio.h>
int main(){
     int n;
    printf("enter input no.");
    scanf("%d",&n);
    switch(n%2){
        case 1: printf("odd");
        break;
        default:printf("even");
    }
    // enter input no.44
// even

return 0;
}