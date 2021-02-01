// 1.12. Write a program to input date in any given format like dd mm yyyy, dd-mm-yyyy, dd/mm/yyyy format and show that date in dd-mmm-yyyy format
#include <stdio.h>
int main(){
    int dd,mm,yyyy;
    printf("input date in any ddmmyyyy, dd-mm-yyyy, dd/mm/yyyy format :");
    scanf("%2d %2d %4d",&dd,&mm,&yyyy);
    scanf("%2d-%2d-%4d",&dd,&mm,&yyyy);
    scanf("%2d/%2d/%4d",&dd,&mm,&yyyy);
    printf("%2d-%2d-%4d",dd,mm,yyyy);

return 0;
}