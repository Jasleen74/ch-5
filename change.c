 #include<stdio.h>
     int change (int );
    int change (int x){
        x = 45;   // Misnomer
        return 0;
    }
 
 
 int main() {
    int b = 22;
    change (b);
    printf("b is %d",b); // the value of b remains 22 
    
    return 0; } /* this is because b ki copy gaye hai change mein , change ko 22 mila
    is liye yahan par b ki value nhi change ho rahi hai*/