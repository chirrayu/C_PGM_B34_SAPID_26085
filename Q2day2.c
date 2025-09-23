//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area = 153.94
Circumference = 43.98

Input 2:
3.5
Output 2:
Area = 38.48
Circumference = 21.99
*/

#include<stdio.h>
int main(){
float r;
printf("enter radius");
scanf("%f",&r);
printf("Area = %.2f\n",3.14*r*r);
printf("Circumference = %.2f",2*3.14*r);
return 0;
}