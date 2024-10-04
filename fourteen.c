#include <stdio.h>

void main(){
    int a,b;
    char c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Enter '+' for addition, '-' for subtraction, '*' for multiplication, '/' for division: ");
    scanf(" %c",&c);
    if(c=='+'){printf("%d + %d = %d",a,b,(a+b));}
    else if(c=='-'){printf("%d - %d = %d",a,b,(a-b));}
    else if(c=='*'){printf("%d * %d = %d",a,b,(a*b));}
    else if(c=='/'){printf("%d / %d = %d",a,b,(a/b));}
    else{printf("Wrong input");}
}
