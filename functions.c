// FUNCTION IS A WAY TO BREAK OUR CODE INTO CHUNKS SO THAT IT IS POSIBLE FOR A PROGRAMMAER TO REUSE THEM.

#include<stdio.h>

    // Function prototype
    int sum(int,int);

    // Function definition
    int sum (int x , int y){
        printf("The value of sum is %d\n", x + y );
    }
    
int main() {
    
    int a ; int b ;

    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);

    // function call
    //we here dont even need to make these varibales or simple write sum (2,3) it will still give us as the ans 5
    sum(a,b);
 return 0; 
}
