// pp003: Write a program to input a number and check it to be even or odd using bitwise operator.
#include <stdio.h>
int main(){
    int n;
    printf("enter input no.");
    scanf("%d",&n);
    n&1?printf("odd"):printf("even");

return 0;
}
// enter input no.66
// even