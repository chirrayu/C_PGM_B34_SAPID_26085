//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
a is a vowel.

Input 2:
x
Output 2:
x is a consonant.
*/

#include<stdio.h>
int main(){
char c;
printf("enter character");
scanf(" %c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
printf("%c is a vowel.",c);
}
else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
    printf("%c is a consonant.",c);
}
else
{
    printf("Not an alphabet.");
}
return 0;
}