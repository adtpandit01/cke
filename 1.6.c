// 1.6. Write a program to input a hexa decimal number and print into decimal, octal and hexa decimal
#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%x",&n);
    printf("decimal=%d\noctal=%o\nhexadecimal=%X",n,n,n);

return 0;
}
// enter nAD67
// decimal=44391
// octal=126547
// hexadecimal=AD67