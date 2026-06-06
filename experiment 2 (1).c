//Name:prachi pramod hate
//PRN:2503033111372011
#include<stdio.h>
int main(){
int a,b,add, sub, mul, modulus;
float division;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
add = a+b;
printf("Sum: %d\n", add);
printf("Difference: %d\n", sub);
mul = a*b;
printf("Product: %d\n", mul);
division = (float)a/b;
printf("Quotient: %f\n", division);
modulus = a % b;
printf("Modulus: %d\n", modulus);
return 0;
}