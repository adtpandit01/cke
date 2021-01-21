// 1.11. Write a program to input date in ddmmyyyy format and print as dd-mmm-yyyy format
#include <stdio.h>
int main(){
    int dd,mm,yyyy;
    printf("input date in ddmmyyyy format:");
    scanf("%2d%2d%4d",&dd,&mm,&yyyy);
    printf("%2d-%3d-%4d",dd,mm,yyyy);

return 0;
}
// input date in ddmmyyyy format:23
// 12
// 1999
// 23- 12-1999