// pp001: Write a program to input a number and check it to be even or odd using if statement.
#include <stdio.h>
int main(){
    int n;
    printf("enter input no.");
    scanf("%d",&n);
    if(n%2)printf("%d is odd",n);else printf("%d is even",n);

return 0;
}
// enter input no.42
// 42 is even