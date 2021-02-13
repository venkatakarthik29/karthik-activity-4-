//Write the program to print "Hello World !"
#include<stdio.h>
float input()
{
float n;
printf("enter number:");
scanf("%f" &n);
return n;
}
{
float sum(float a,float b)
{
float sum;
sum = a+b;
return sum;
}
void output(float n)
{
printf("sum = %f" ,n);
}
int main()
{
float x,y,z;
x = input();
y = input();
z = sum(x,y);
output(z);
return0;
}
