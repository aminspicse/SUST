#include<stdio.h>

int main(){

    int num;
    long int fact=1;

    printf("Enter Number: ");
    scanf("%d",&num);

    if(num == 0 || num == 1){
        fact = 1;
    }else{
        for(int i=2; i<= num; i++){
            fact = fact*i;
        }
    }

    printf("Factorial = %ld\n", fact);

    return 0;
}
