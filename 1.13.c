// 1.13. Write a program to input data of a student like rollno (int), name (string with space), gender (char), email (string without space), mobile(string without space), course (string with space) and show the output.
#include <stdio.h>
#include<stdlib.h>
int main(){
    int rollno;char name[20],gender,email[30],mobile[13],course[10];
    printf("enter rollno:");scanf("%d",&rollno);
    printf("enter name:");fflush(stdin);
    gets(name);
    printf("gender:");fflush(stdin);
    gender=getchar();
    printf("enter email:");fflush(stdin);
    scanf("%s",&email);
    printf("enter mobile:");fflush(stdin);
    scanf("%s",&mobile);
    printf("enter course:");fflush(stdin);
    gets(course);
    printf("rollno=%d\nname=%s\ngender=%c\nemail=%s\nmobile=%s\ncourse=%s",rollno,name,gender,email,mobile,course);
    



return 0;
}
// enter rollno:12
// enter name:adarsh
// gender:m
// enter email:adt@gmail.com
// enter mobile:9696697291
// enter course:btech
// rollno=12
// name=adarsh
// gender=m
// email=adt@gmail.com
// mobile=9696697291
// course=btech