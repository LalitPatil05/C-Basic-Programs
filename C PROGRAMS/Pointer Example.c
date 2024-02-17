#include<stdio.h>
int main()
{
 int a, *intPtr ;
 float b, *floatPtr ;
 double c, *doublePtr ;
 
 intPtr = &a ; // Asume address of a is 1000
 floatPtr = &b ; // Asume address of b is 2000
 doublePtr = &c ; // Asume address of c is 3000
 
 printf("intPtr value : %u\n", intPtr) ;
 printf("floatPtr value : %u\n", floatPtr) ;
 printf("doublePtr value : %u", doublePtr) ;
 
 intPtr = intPtr + 3 ; // intPtr = 1000 + ( 3 * 2 )
 floatPtr = floatPtr + 2 ; // floatPtr = 2000 + ( 2 * 4 )
 doublePtr = doublePtr + 5 ; // doublePtr = 3000 + ( 5 * 6 )
 
 printf("after uding increment operator\n");
 
 printf("intPtr value : %u\n", intPtr) ;
 printf("floatPtr value : %u\n", floatPtr) ;
 printf("doublePtr value : %u", doublePtr) ;
 
 
}
