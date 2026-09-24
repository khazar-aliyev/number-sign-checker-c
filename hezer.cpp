#include <stdio.h>
#include <stdbool.h>
int main(){
    double a;
    printf("Lets see your number is p/n/0!!!\n");
    printf("Enter your number!!!\n");
    scanf("%lf",&a);
    if (a>0){
        printf("Your number is positive");
    }
    else if (a==0){
        printf("Your number is 0");
    }
    else{
        printf("Your number is negative");
    }
    
}
