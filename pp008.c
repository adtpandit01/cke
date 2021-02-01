// pp008: Write a program to input few numbers from command line and print all even numbers from given set of numbers.
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    for(int i=1;i<=argc-1;i++){
        int n=atoi(argv[i]);
        if (n%2==0) printf("%d",n);
    }
    
    
    return 0;
}
// C:\Users\Master Adarsh Tiwari\Desktop\cke>pp008 2 3 4 5 6
// 246