#include<stdio.h>

int main(){

    int a, b, c;
    printf("Enter 3 Arms: ");
    scanf("%d%d%d",&a,&b,&c);

    if( (a+b) > c && (a+c) > b && (b+c) > a){
        printf("Triangle");
    }else{
        printf("Not Triangle");
    }

    return 0;
}
