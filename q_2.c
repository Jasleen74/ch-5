/*Quick Quiz: Use the library function to calculate the area of a square with side a.*/
#include<stdio.h>
#include<math.h>
int main() {
     int a ;
     printf("pls enter the value of side of the square : ");
     scanf("%d",&a);
     printf("The area of the square is %f",pow (a,2));   // pow is an in-built function in the library math.h
                                                         // in pow we add float or double cuz pow returns a double
 return 0;
}