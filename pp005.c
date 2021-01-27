// pp005: Write a program to input two numbers and print all even numbers in given range.
#include <stdio.h>
int main(){
    int a=1,b=20;
    for(int i=a;i<=b;i++)
    if(i%2)printf("%d\t",i);

return 0;
}
// 1       3       5       7       9       11      13      15      17      19