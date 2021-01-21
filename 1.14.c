// 1.14. Write a program to input name of a person and print first four character only
#include <stdio.h>
int main(){
    char s[20];
    printf("enter name:");
    gets(s);
    printf("%.4s",s);

return 0;
}
// enter name:adarsh
// adar