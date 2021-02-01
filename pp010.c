// pp010: Create a header file as pp010.h having a function iseven() which takes a number as input and returns 1 if the number is even else returns 0. Write aprogram pp010.c, include the header file into it. Create the main() function  to input a number and check it to be even or odd using iseven() function.
#include <stdio.h>
#include "myheader.h"
int main(){
    int n;
    printf("enter n:");scanf("%d",&n);
    iseven(n)?printf("even"):printf("odd");

return 0;
}
// enter n:9
// odd