#include<stdio.h>

int main(){
    int a, b, c;
    int largest = -999999999, slargest= -999999999;

    printf("Enter 3 number: ");
    scanf("%d%d%d",&a,&b,&c);

    if(largest < a){
        largest = a;
    }
    if(largest < b){
        largest = b;
    }
    if(largest < c){
        largest = c;
    }

    printf("Largest = %d\n",largest);

    if(slargest < a && largest > a){
        slargest = a;
    }
    if(slargest < b && largest > b){
        slargest = b;
    }
    if(slargest < c && largest > c){
        slargest = c;
    }

    printf("Second Largest: %d\n",slargest);

    return 0;
}
