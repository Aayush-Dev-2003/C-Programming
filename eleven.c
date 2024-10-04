#include <stdio.h>

void main(){
    char c;
    scanf("%c",&c);
    if(isalpha(c)){printf("%c is an alphabet",c);}
    else{printf("%c is not an alphabet",c);}
}
