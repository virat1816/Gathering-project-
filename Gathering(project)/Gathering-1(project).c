#include <stdio.h>
#include<string.h>

int fact(int a){
    if(a<=1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main(){
    int y;
    printf("Enter a Number:");
    scanf("%d",&y);
    
    printf("factorial of %d",fact(y));

  return 0;
}



