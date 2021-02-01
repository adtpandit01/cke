// pp007: Write a program to input numbers from user till 0 is pressed and check every given number to be even or odd.
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    do{
        n&1?printf("odd\n"):printf("even\n");
        scanf("%d",&n);
    }
    while(n!=0);

return 0;
}
// 12
// even
// 33
// odd
// 45
// odd