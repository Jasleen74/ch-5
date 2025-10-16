#include<stdio.h>

int factorial (int);   // function prototype

int factorial (int n ){   // function defintion 
    if (n == 1 || n == 0){   //  this is the base condition 
                             //becuse we dont wanna go to negative or multiply by 0
        return 1;       // so we return the value as 1 
    }
    return factorial(n-1)*n;  // recursive function 
}
int main() {
    int a ;
    printf("Enter a num : ");
    scanf("%d",&a);

    printf("the factorial of %d is %d", a , factorial(a));  // calling the function 
     
  
 return 0;
}