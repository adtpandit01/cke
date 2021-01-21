// 1.9. Write a program to input a date in dd-mm-yyyy format and print date as dd/mm/yyyy format
#include <stdio.h>
int main(){
    int d,m,y;
    printf("enter date in dd-mm-yyyy:");
    scanf("%2d-%2d-%4d",&d,&m,&y);
    printf("%2d/%2d/%4d",d,m,y);

return 0;
}
// enter date in dd-mm-yyyy:23-06-2000
// 23/ 6/2000