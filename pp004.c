// pp004: Write a program to input a number and check it to be even or odd without using any arithmetic, relational, logical or bitwise operator.
#include <stdio.h>
struct n{
    unsigned nt:1;
};
int main(){
     int num;struct n n1;
    printf("enter input no.");
    scanf("%d",&num);
    n1.nt=num;
    if(n1.nt)printf("odd"); else printf("even");
    



return 0;
}
//  enter input no.76
// even