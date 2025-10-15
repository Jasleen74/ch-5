#include<stdio.h>

 int add (int,int);
 int add (int x , int y ){
    printf("the addition is : %d\n", x+y);
 }

 int sub(int,int);
 int sub (int x , int y ){
    printf("the subtraction is : %d\n", x-y);
 }
int main() {
    int a ; int b ;

    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);
   

   char c ;
    printf("Enter p for add and s for subracting : ");
    scanf(" %c",&c);

    if (c=='p'){
        add(a,b);
    }
     else if(c=='s'){
        sub(a,b);
    }
    

   
     
  
 return 0;
}

