// 1.5. Write a program to input an octal number and print into decimal, octal and hexa decimal
#include <stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%o",&n);
    printf("decimal=%d\noctal=%o\nhexadecimal=%X",n,n,n);

return 0;
}
// enter n456
// decimal=302
// octal=456
// hexadecimal=12E