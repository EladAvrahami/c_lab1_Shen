#include<string.h>
#include<stdio.h>


//strcat - concatenate two strings
//strcat(s1,s2) - concatenates string s2 onto the end of string s1
//s1 - destination string
//s2 - source string
//returns s1
//strcat(s1,s2) - concatenates string s2 onto the end of string s1
//need to make sure s1 has enough space to hold the result

int main(){

char str1[] = "Hello", str2[] = "World";
//strcat(str1,str2);
printf("str: %s\n",strcat(str1,str2));



    return 0;
}