// pp006: Write a program to create an array of 10 integers, input the data and show all even numbers in given numbers.
#include <stdio.h>
int main(){
    int n[10];
    for(int i=0;i<=9;i++)
    scanf("%d",&n[i]);
    for(int i=0;i<=9;i++){
        if(n[i]%2==0)
        printf("%d\t",n[i]);
    }


return 0;
}
// 12      23      34      45      56      67      78      89      90      100
// 12      34      56      78      90      100
