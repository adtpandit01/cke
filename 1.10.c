// 1.10. Write a program to input date in ddmmyyyy format and print as dd/mm/yyyy format
#include <stdio.h>
int main(){
    int dd,mm,yyyy;
    printf("input date in ddmmyyyy format:");
    scanf("%2d%2d%4d",&dd,&mm,&yyyy);
    printf("%2d/%2d/%4d",dd,mm,yyyy);

return 0;
}
// input date in ddmmyyyy format:24
// 6
// 2003
// 24/ 6/2003